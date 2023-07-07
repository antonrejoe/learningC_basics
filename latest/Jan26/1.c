
#include <stdio.h>
#include <string.h>
struct student {
  int roll;
  char name[20];
  float marks;

};


int main(){

  struct student record[3];

  int i ;

  record[0].roll = 1;
  strcpy(record[0].name, "Aare");
  record.roll[0].marks = 34;

  record[1].roll = 1;
  strcpy(record[1].name, "bas");
  record.roll[1].marks = 34;

  record[2].roll = 1;
  strcpy(record[2].name, "Cad");
  record.roll[2].marks = 34;


  
  for (int i = 0; i < 3 ; i++) {

    printf("Records of the student %d\n", i+1);
    printf("roll no : %d \n Name : %s \n  %d\n", record[i].roll , record[i].name , record[i].marks);
  }
    


  
    

    return 0;
}
