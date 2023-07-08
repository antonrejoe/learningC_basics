
// file pointers
#include <stdio.h>


int main(int argc, char *argv[])
{

  FILE *fp;  
  int a = 0 , b = 00;

  char str[10];

  fp = fopen("hello.txt", "r");
  fprintf(fp, "%d", a);
  fclose(fp);

  return 0;
}
