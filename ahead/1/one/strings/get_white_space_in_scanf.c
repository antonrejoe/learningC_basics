
#include <stdio.h>



int main(int argc, char *argv[])
{
  char line[10];
  printf("This is how you could get white space in scanf\n");
  scanf("%[^\n]", line);
  


  return 0;
}
