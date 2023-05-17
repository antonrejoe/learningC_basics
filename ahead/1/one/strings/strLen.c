
#include <stdio.h>

int main(){
  char s[1000] , i;
  printf("Enter a string:\n");
  scanf("%s", s);
  // 
  // this for loop is different from others it will just update the value of i and just 
  // gracefully gives it to us
   for ( i = 0; s[i] != '\0' ; ++i); 
  
  printf("Length of string : %d \n ", i);
  
  return 0;
}
