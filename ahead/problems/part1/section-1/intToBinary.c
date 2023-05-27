
#include <string.h>
#include <stdio.h>
#include <math.h>

int myPow (int digit  , int power){
  
  int imThePower = 1;
  for (int i = 1; i <= power ; i++) {

    imThePower*=digit;
  }
  return imThePower;
}

int main(int argc, char *argv[])
{

  int num = 10 , i = 1 , binary=0 , rem;  
  while (num!=0){
    
    rem = num%2;
    num /=2;
    binary+=rem*i;
    i*=10;
  }
  printf("%d \n",binary);
  return 0;
}
