#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T, typename F>
void  iter(T* arr, const std::size_t size, F func)
{
  for (std::size_t i = 0; i < size; ++i)
  {
    func(arr[i]);
  }
}

#endif
