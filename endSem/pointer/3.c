
// arrays with pointer
//


#include <stdio.h>

int main(int argc, char *argv[])
{

  int arr[]= {4 , 32 ,1 , 8 , 12};
  // that's how u declare a pointer for arrays
 
  int (*ptr)[5];

  ptr  =  &arr;

  int *pChad = arr;

  for (int i = 0 ;i < 4; i++) {

    printf("that's how u do it beach %lu \n",*(pChad +1)+1 );
    // printf("that's how u do it beach %lu \n", sizeof(*ptr));
  }

  

  return 0;
}
