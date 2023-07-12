
#include <stdio.h>


int main(){

  int arr[] = {3  ,  1 ,2 , 9};
  int *ptr;
  ptr = &arr[0];
  for (int i = 0 ; i < 4; i++ ) {

    printf("%d here is the value \n" , *(ptr+i));
  }
    


  return 0;

}
