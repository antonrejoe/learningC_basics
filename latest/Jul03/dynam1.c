

#include <stdio.h>
#include <stdlib.h>

struct book {
  char name[20];
};

struct book *bptr;



int main(int argc, char *argv[])
{
  bptr = (struct book*)malloc(sizeof(struct book ));
  scanf("%s", bptr->name);
  printf("Name=%s", bptr->name);

  
  return 0;
}
