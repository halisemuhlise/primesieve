///
/// @file   has_openmp.cpp
/// @brief  Used to check OpenMP support in compilers.
///
/// Copyright (C) 2012 Kim Walisch, <kim.walisch@gmail.com>
///
/// This file is licensed under the New BSD License. See the LICENSE
/// file in the top-level directory.
///

#include <omp.h>
#include <iostream>

int main()
{
  std::cout << "OpenMP version (yyyymm) : " << _OPENMP               << std::endl
            << "Number of CPU cores     : " << omp_get_max_threads() << std::endl;
  return 0;
}