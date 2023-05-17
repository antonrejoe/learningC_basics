// laddub
#include <stdio.h>  
#include <string.h>

int main(int argc, char *argv[])
{
  char str1[] = "This is anton rejoe " , str2[] = "concat";

  strcat(str1, str2);

  puts(str1);
  puts(str2);

  return 0;
}
