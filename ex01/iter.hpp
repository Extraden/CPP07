#include <cstddef>

template <typename T>
void  iter(T* arr, const unsigned long size, void (func)())
{
  for (std::size_t i = 0; i < size; ++i)
  {
    func(arr[i]);
  }
}
