
#include <stdio.h>


int main(int argc, char *argv[])
{
  char s1[100] , s2[100], i , j;

  printf("Enter the first string : ");
  scanf("%s", s1);

  printf("Enter the second string : ");
  scanf("%s", s2);

  for (i = 0 ; s1[i] != '\0'; ++i ); 
  
  // right now we have updated the value of i so , if we again do the below thing the 
  // individual characters of the string will get assigned to the end of the s2
  for (j = 0; s2[j] != '\0';  ++j , ++i ) {

    s1[i] = s2[j];

  
  }

  s1[i] = '\0' ; // as the value of the i at the end of the character
  printf("The concatanated strings is  %s\n", s1); 
  return 0;
}
