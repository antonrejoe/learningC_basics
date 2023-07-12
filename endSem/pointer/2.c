
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{   
  char str[]= "My name i";
  
  char *ptr;

  ptr  = str;

  for (int i = 0; i < strlen(str); i++) {
    printf("T case 1 %x \n", ptr);
    printf("T case 2 %c \n", *ptr );
    ptr++;

    if(*ptr == ' '){
      printf("I wil sing i used to love her\n");
    }

  }


  return 0;
}
