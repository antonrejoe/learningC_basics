
#include <stdio.h>

int main(int argc, char *argv[])
{

  int a ;
  int* c;

  c= &a;

  printf("%p\n", c);

  a = 32;
  // %p format specifies gives the memory location of a variable
  printf("%p\n", c);
  return 0;
}
