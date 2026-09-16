#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>

template <typename T>
class Array 
{
  public:
    Array();
    Array(unsigned int);
    Array(const Array<T>& other);
    Array<T>& operator=(const Array<T>& other);
    ~Array();

    T& operator[](const unsigned long index);
    const T& operator[](const unsigned long index) const;
    std::size_t size() const;

  private:
    T *arr;
    std::size_t length;
};

# include "Array.tpp"

#endif
