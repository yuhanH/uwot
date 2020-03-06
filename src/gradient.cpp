//  UWOT -- An R package for dimensionality reduction using UMAP
//
//  Copyright (C) 2018 James Melville
//
//  This file is part of UWOT
//
//  UWOT is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  UWOT is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with UWOT.  If not, see <http://www.gnu.org/licenses/>.
#include "gradient.h"
#include <cmath>

// https://martin.ankerl.com/2012/01/25/optimized-approximative-pow-in-c-and-cpp/
// an approximation to pow
auto fastPrecisePow(float a, float b) -> float {
  // calculate approximation with fraction of the exponent
  int e = static_cast<int>(b);
  union {
    double d;
    int x[2];
  } u = { a };
  u.x[1] = static_cast<int>((b - e) * (u.x[1] - 1072632447) + 1072632447);
  u.x[0] = 0;
  
  // exponentiation by squaring with the exponent's integer part
  // double r = u.d makes everything much slower, not sure why
  double r = 1.0;
  while (e) {
    if (e & 1) {
      r *= a;
    }
    a *= a;
    e >>= 1;
  }
  
  return static_cast<float>(r * u.d);
}

// UMAP implementation code
template <float (*powfun)(float, float)>
base_umap_gradient<powfun>::base_umap_gradient(const float a, const float b,
                                               const float gamma)
    : a(a), b(b), a_b_m2(-2.0 * a * b), gamma_b_2(2.0 * gamma * b) {}

template <float (*powfun)(float, float)>
auto
base_umap_gradient<powfun>::grad_attr(const float dist_squared) const -> const float {
  const float pd2b = powfun(dist_squared, b);
  return (a_b_m2 * pd2b) / (dist_squared * (a * pd2b + 1.0));
}

template <float (*powfun)(float, float)>
auto
base_umap_gradient<powfun>::grad_rep(const float dist_squared) const -> const float {
  return gamma_b_2 /
         ((0.001 + dist_squared) * (a * powfun(dist_squared, b) + 1.0));
}

// UMAP using standard power function
template class base_umap_gradient<std::pow>;
// apUMAP using approximate power function
template class base_umap_gradient<fastPrecisePow>;

// t-UMAP

tumap_gradient::tumap_gradient() = default;

auto tumap_gradient::grad_attr(const float dist_squared) const -> const float {
  return -2.0 / (dist_squared + 1.0);
}

auto tumap_gradient::grad_rep(const float dist_squared) const -> const float {
  return 2.0 / ((0.001 + dist_squared) * (dist_squared + 1.0));
}

// LargeVis

largevis_gradient::largevis_gradient(const float gamma)
    : gamma_2(gamma * 2.0) {}

auto largevis_gradient::grad_attr(const float dist_squared) const -> const float {
  return -2.0 / (dist_squared + 1.0);
}

auto largevis_gradient::grad_rep(const float dist_squared) const -> const float {
  return gamma_2 / ((0.1 + dist_squared) * (dist_squared + 1.0));
}
