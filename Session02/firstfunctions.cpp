#include <iostream>

//The issue with the first version is that it was passing by values the variable, so copies were done.

void swap(int& a, int& b)
{
  int s = a;
  a = b;
  b = s;
}

void swappointer(int *a, int *b)
{
  int s = *a;
  *a = *b;
  *b = s;
}

int main()
{
  int a = 0;
  int b = 0;

  std::cin >> a;
  std::cin >> b;

  int* c;
  c=&a;
  int* d;
  d=&b;

  swap(a, b);

  std::cout << a << " " << b << std::endl;

  //In order to prove that it works with pointer, let's do it a second time differently. First I reswap to be in the same situation than at the beginning:

  swap(a, b);

  //The I use swappointer
  
  swappointer(c, d);

  std::cout << *c << " " << *d << std::endl;
  return 0;
}
