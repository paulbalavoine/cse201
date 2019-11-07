#include <iostream>

int main(){
  int array[5] = {1,2,3,4,5};

  int *p1;
  int **pp1;
  int*& p2 = p1;

  p1 = array;
  pp1 = &p1;

  p2 = array + *p1;
  p1 = p1 + *p2;

  std::cout << **pp1 << std::endl;
}
