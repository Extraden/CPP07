#include <exception>

template <typename T>
Array<T>::Array() : arr(NULL), length(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]()), length(n) {}

template <typename T>
Array<T>::Array(const Array<T>& other) : arr(new T[other.length]), length(other.length) 
{
  for (std::size_t i = 0; i < length; ++i)
  {
    arr[i] = other.arr[i];
  }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
  if (this != &other)
  {
    T* tmpArr = new T[other.length];
    for (std::size_t i = 0; i < other.length; ++i)
    {
      tmpArr[i] = other.arr[i];
    }
    delete[] arr;

    arr = tmpArr;

    length = other.length;
  }
  return *this;
}

template <typename T>
Array<T>::~Array()
{
  delete[] arr;
}

template <typename T>
T& Array<T>::operator[](const unsigned long index)
{
  if (index >= length)
    throw std::exception();
  return arr[index];
}

template <typename T>
const T& Array<T>::operator[](const unsigned long index) const
{
  if (index >= length)
    throw std::exception();
  return arr[index];
}

template <typename T>
std::size_t Array<T>::size() const
{
  return length;
}

