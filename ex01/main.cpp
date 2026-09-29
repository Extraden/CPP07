#include <iostream>
#include "iter.hpp"

void  print(const char& c)
{
  std::cout << c << "\n";
}

int	main()
{
  char arr[] = {'0', 'B', ' '};

  ::iter(arr, sizeof(arr) / sizeof(arr[0]), print);
	return 0;
}
