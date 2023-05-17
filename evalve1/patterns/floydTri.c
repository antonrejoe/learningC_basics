#include <stdio.h>



int main(int argc, char *argv[])
{

  int s = 1;
  for (int i = 0; i < 5; i++) {

    for (int j = 0 ; j <=i; j++) {
      printf("%d ", s);
    
             s++;
    }
    printf("\n");
  
  }
  return 0;
}
