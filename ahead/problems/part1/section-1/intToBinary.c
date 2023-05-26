
#include <stdio.h>
#include <stdlib.h>

int toBin(int num){
  
  int i = 0  ,size =0  ;
  char
  printf("%d\n" , num);
  while (num > 0) {
    size++;
    num/=10;
    printf("%d\n" , size);
  }
  int *resBin = malloc(sizeof(size));
  if (num == 0) {
    
    return 0;
  
  }

  printf("%d\n" , num);
  for (; num > 0; ) {

    resBin[i++] = num%1;
    num /=2;
  
  }
  return ;
  

}

int main(int argc, char *argv[])
{

  toBin(9);
  
  return 0;
}


