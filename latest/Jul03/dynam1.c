

#include <stdio.h>
#include <stdlib.h>

struct book {
  char name[20];
};

struct book *bptr;

struct book harryPotter[2];

void pass(struct book harryPotter[], int length){


  for (int i = 0 ;i < length;i++) {

  for (int j = 0 ;j < length;j++) {
    scanf(" %c ", &harryPotter[i].name[j]);
    printf(" %c ", harryPotter[i].name[j]);
  }
  }


}

// syntax  for arrow operator 
// (pointer variable)->(variable) = value;

int main(int argc, char *argv[])
{
//  bptr = (struct book*)malloc(sizeof(struct book ));
 // scanf("%s", bptr->name);
  //printf("Name=%s", bptr->name);

  pass(harryPotter, 2);
  
  return 0;
}
