# uwot 0.1.5

## Bug fixes and minor improvements

* Initialization of supervised UMAP should now be faster
(<https://github.com/jlmelville/uwot/issues/34>). Contributed by
[Aaron Lun](https://github.com/LTLA).

# uwot 0.1.4

## Bug fixes and minor improvements

* Fixed incorrect loading of Annoy indexes to be compatible with newer versions
of RcppAnnoy (<https://github.com/jlmelville/uwot/issues/31>). My thanks to
Dirk Eddelbuettel and Erik Bernhardsson for aid in identifying the problem.
* Fix for `ERROR: there is already an InterruptableProgressMonitor instance defined`.
* If `verbose = TRUE`, the `a`, `b` curve parameters are now logged.

# uwot 0.1.3

## Bug fixes and minor improvements

* Fixed an issue where the session would crash if the Annoy nearest neighbor
search was unable to find k neighbors for an item.

## Known issue

Even with a fix for the bug mentioned above, if the nearest neighbor index file
is larger than 2GB in size, Annoy may not be able to read the data back in. This
should only occur with very large or high-dimensional datasets. The nearest
neighbor search will fail under these conditions. A work-around is to set
`n_threads = 0`, because the index will not be written to disk and re-loaded
under these circumstances, at the cost of a longer search time. Alternatively,
set the `pca` parameter to reduce the dimensionality or lower `n_trees`, both of
which will reduce the size of the index on disk. However, either may lower the
accuracy of the nearest neighbor results.

# uwot 0.1.2

Initial CRAN release.

## New features

* New parameter, `tmpdir`, which allows the user to specify the temporary
directory where nearest neighbor indexes will be written during Annoy
nearest neighbor search. The default is `base::tempdir()`. Only used if
`n_threads > 1` and `nn_method = "annoy"`.

## Bug fixes and minor improvements

* Fixed an issue with `lvish` where there was an off-by-one error when
calculating input probabilities.

* Added a safe-guard to `lvish` to prevent the gaussian precision, beta,
becoming overly large when the binary search fails during perplexity
calibration.

* The `lvish` perplexity calibration uses the log-sum-exp trick to avoid
numeric underflow if beta becomes large.

# uwot 0.0.0.9010 (31 March 2019)

## New features

* New parameter: `pcg_rand`. If `TRUE` (the default), then a random number
generator from [the PCG family](http://www.pcg-random.org/) is used during the
stochastic optimization phase. The old PRNG, a direct translation of
an implementation of the Tausworthe "taus88" PRNG used in the Python
version of UMAP, can be obtained by setting `pcg_rand = FALSE`. The new PRNG is
slower, but is likely superior in its statistical randomness. This change in
behavior will be break backwards compatibility: you will now get slightly
different results even with the same seed.
* New parameter: `fast_sgd`. If `TRUE`, then the following combination of
parameters are set: `n_sgd_threads = "auto"`, `pcg_rand = FALSE` and `approx_pow
= TRUE`. These will result in a substantially faster optimization phase, at the
cost of being slightly less accurate and results not being exactly repeatable.
`fast_sgd = FALSE` by default but if you are only interested in visualization,
then `fast_sgd` gives perfectly good results. For more generic dimensionality
reduction and reproducibility, keep `fast_sgd = FALSE`.
* New parameter: `init_sdev` which specifies how large the standard deviation
of each column of the initial coordinates should be. This will scale any input
coordinates (including user-provided matrix coordinates). `init = "spca"` can
now be thought of as an alias of `init = "pca", init_sdev = 1e-4`. This may be
too aggressive scaling for some datasets. The typical UMAP spectral
initializations tend to result in standard deviations of around `2` to `5`, so
this might be more appropriate in some cases. If spectral initialization detects
multiple components in the affinity graph and falls back to scaled PCA, it
uses `init_sdev = 1`.
* As a result of adding `init_sdev`, the `init` options `sspectral`,
`slaplacian` and `snormlaplacian` have been removed (they weren't around for
very long anyway). You can get the same behavior by e.g.
`init = "spectral", init_sdev = 1e-4`. `init = "spca"` is sticking around
because I use it a lot.

## Bug fixes and minor improvements

* Spectral initialization (the default) was sometimes generating coordinates
that had too large a range, due to an erroneous scale factor that failed to
account for negative coordinate values. This could give rise to embeddings with
very noticeable outliers distant from the main clusters.
* Also during spectral initialization, the amount of noise being added had a
standard deviation an order of magnitude too large compared to the Python
implementation (this probably didn't make any difference though).
* If requesting a spectral initialization, but multiple disconnected components
are present, fall back to `init = "spca"`.
* Removed dependency on C++ `<random>` header. This breaks backwards
compatibility even if you set `pcg_rand = FALSE`.
* `metric = "cosine"` results were incorrectly using the unmodified Annoy
angular distance.
* Numeric matrix columns can be specified as the target for the `categorical`
metric (fixes <https://github.com/jlmelville/uwot/issues/20>).

# uwot 0.0.0.9009 (1 January 2019)

* Data is now stored column-wise during optimization, which should result in
an increase in performance for larger values of `n_components` (e.g.
approximately 50% faster optimization time with MNIST and `n_components = 50`).
* New parameter: `pca_center`, which controls whether to center the data before
applying PCA. It would be typical to set this to `FALSE` if you are applying
PCA to binary data (although note you can't use this with setting with
`metric = "hamming"`)
* PCA will now be used when the `metric` is `"manhattan"` and `"cosine"`. It's
still *not* applied when using `"hamming"` (data still needs to be in binary
format, not real-valued).
* If using mixed datatypes, you may override the `pca` and `pca_center`
parameter values for a given data block by using a list for the value of the
metric, with the column ids/names as an unnamed item and the overriding values
as named items, e.g. instead of `manhattan = 1:100`, use
`manhattan = list(1:100, pca_center = FALSE)` to turn off PCA centering for
just that block. This functionality exists mainly for the case where you have
mixed binary and real-valued data and want to apply PCA to both data types. It's
normal to apply centering to real-valued data but not to binary data.

## Bug fixes and minor improvements

* Fixed bug that affected `umap_transform`, where negative sampling was over
the size of the test data (should be the training data).
* Some other performance improvements (around 10% faster for the optimization
stage with MNIST).
* When `verbose = TRUE`, log the Annoy recall accuracy, which may help tune
values of `n_trees` and `search_k`.

# uwot 0.0.0.9008 (December 23 2018)

## New features

* New parameter: `n_sgd_threads`, which controls the number of threads used
in the stochastic gradient descent. By default this is now single-threaded
and should result in reproducible results when using `set.seed`. To get back
the old, less consistent, but faster settings, set `n_sgd_threads = "auto"`.
* API change for consistency with Python UMAP:
  * `alpha` is now `learning_rate`.
  * `gamma` is now `repulsion_strength`.
* Default spectral initialization now looks for disconnected components and
initializes them separately (also applies to `laplacian` and `normlaplacian`).
* New `init` options: `sspectral`, `snormlaplacian` and `slaplacian`. These are
like `spectral`, `normlaplacian`, `laplacian` respectively, but scaled so that
each dimension has a standard deviation of 1e-4. This is like the difference
between the `pca` and `spca` options.

## Bug fixes and minor improvements

* Hamming distance support (was actually using Euclidean distance).
* Smooth knn/perplexity calibration results had a small dependency on the
number of threads used.
* Anomalously long spectral initialization times should now be reduced.
* Internal changes and fixes thanks to a code review by
[Aaron Lun](https://github.com/ltla).

# uwot 0.0.0.9007 (December 9 2018)

## New features

* New parameter `pca`: set this to a positive integer to reduce matrix of
data frames to that number of columns using PCA. Only works if
`metric = "euclidean"`. If you have > 100 columns, this can substantially
improve the speed of the nearest neighbor search. t-SNE implementations often
set this value to 50.

## Bug fixes and minor improvements

* Laplacian Eigenmap initialization convergence failure is now correctly
detected.
* C++ code was over-writing data passed from R as a function argument.

# uwot 0.0.0.9006 (December 5 2018)

## New features

* Highly experimental mixed data type support for `metric`: instead of
specifying a single metric name (e.g. `metric = "euclidean"`), you can pass a
list, where the name of each item is the metric to use and the value is a vector
of the names of the columns to use with that metric, e.g.
`metric = list("euclidean" = c("A1", "A2"), "cosine" = c("B1", "B2", "B3"))`
treats columns `A1` and `A2` as one block, using the Euclidean distance to find
nearest neighbors, whereas `B1`, `B2` and `B3` are treated as a second block,
using the cosine distance.
* Factor columns can also be used in the metric, using the metric name
`categorical`.
* `y` may now be a data frame or matrix if multiple target data is available.
* New parameter `target_metric`, to specify the distance metric to use with
numerical `y`. This has the same capabilities as `metric`.
* Multiple external nearest neighbor data sources are now supported. Instead of
passing a list of two matrices, pass a list of lists, one for each external
metric.
* More details on mixed data types can be found at
<https://github.com/jlmelville/uwot#mixed-data-types>.
* Compatibility with older versions of RcppParallel (contributed by
[sirusb](https://github.com/sirusb)).
* `scale = "Z"` To Z-scale each column of input (synonym for `scale = TRUE`
or `scale = "scale"`).
* New scaling option, `scale = "colrange"` to scale columns in the range (0, 1).

# uwot 0.0.0.9005 (November 4 2018)

## New features

* Hamming distance is now supported, due to upgrade to RcppAnnoy 0.0.11.

# uwot 0.0.0.9004 (October 21 2018)

## New features

* For supervised UMAP with numeric `y`, you may pass nearest neighbor data
directly, in the same format as that supported by `X`-related nearest neighbor
data. This may be useful if you don't want to use Euclidean distances for
the `y` data, or if you have missing data (and have a way to assign nearest neighbors
for those cases, obviously). See the
[Nearest Neighbor Data Format](https://github.com/jlmelville/uwot#nearest-neighbor-data-format)
section for details.

# uwot 0.0.0.9003 (September 22 2018)

## New features

* New parameter `ret_nn`: when `TRUE` returns nearest neighbor matrices
as a `nn` list: indices in item `idx` and distances in item `dist`. Embedded
coordinates are in `embedding`. Both `ret_nn` and `ret_model` can be `TRUE`,
and should not cause any compatibility issues with supervised embeddings.
* `nn_method` can now take precomputed nearest neighbor data. Must be a list of
two matrices: `idx`, containing integer indexes, and `dist` containing
distances. By no coincidence, this is the format return by `ret_nn`.

## Bug fixes and minor improvements

* Embedding to `n_components = 1` was broken
(<https://github.com/jlmelville/uwot/issues/6>)
* User-supplied matrices to `init` parameter were being modified, in defiance of
basic R pass-by-copy semantics.

# uwot 0.0.0.9002 (August 14 2018)

## Bug fixes and minor improvements

* `metric = "cosine"` is working again for `n_threads` greater than `0`
(<https://github.com/jlmelville/uwot/issues/5>)

# uwot 0.0.0.9001

## New features

* *August 5 2018*. You can now use an existing embedding to add new points via
`umap_transform`. See the example section below.

* *August 1 2018*. Numerical vectors are now supported for supervised dimension
reduction.

* *July 31 2018*. (Very) initial support for supervised dimension reduction:
categorical data only at the moment. Pass in a factor vector (use `NA` for
unknown labels) as the `y` parameter and edges with bad (or unknown) labels are
down-weighted, hopefully leading to better separation of classes. This works
remarkably well for the Fashion MNIST dataset.

* *July 22 2018*. You can now use the cosine and Manhattan distances with the
Annoy nearest neighbor search, via `metric = "cosine"` and `metric =
"manhattan"`, respectively. Hamming distance is not supported because RcppAnnoy
doesn't yet support it.
