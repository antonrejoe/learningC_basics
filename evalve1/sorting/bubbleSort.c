
#include <stdio.h>

void  printArr(int arr[], int size){

  for (int i = 0; i < size; i++) {

    printf("The element %d  is %d \n" , i+1 , arr[i]);
  
  }
}

int main(int argc, char *argv[])
{

  int i , j, size ,  temp;

  printf("Enter the size of the array : ");
  scanf("%d", &size);
  int arr[size];

  for (i = 0 ; i < size; i++) {
    printf("Enter the element %d :", i+1);
    scanf("%d", &arr[i]);
  }

  printArr(arr, size);
  for (i  = 0 ; i < size; i++) {
  
    for (j = 0 ; j < size - i ; j++) {

      if (arr[j + 1] < arr[j]) {
        temp = arr[j+1];
        arr[j+1]= arr[j];
        arr[j] = temp ; 
      
      }
    
    }
  }
  printf("After sort : \n");
  printArr(arr, size);
  return 0;
}

