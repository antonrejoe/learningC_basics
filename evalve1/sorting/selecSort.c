
#include <stdio.h>

void printArr(int arr[], int size){

  for (int i = 0 ; i < size; i++) {

    printf("The element %d is %d \n",i+1, arr[i]);
  
  }
}

int main(int argc, char *argv[])
{

  int i , j , size , arr[size] , min , temp ;

  scanf("%d", &size);

  printf("Enter the elements of the array\n");
  for (i = 0 ; i < size; i++) {

    scanf("%d", &arr[i]);
  
  }
  printf("Before sorting\n");
  printArr(arr, size);
  for (i = 0 ; i < size; i++) {

      min = arr[i];
    
    for (j = i; j < size; j++) {
    
      if (min > arr[j]) {
        min = arr[j];
      
      }
      if (j == size -1) {
          temp = arr[i];
          arr[i] = min;
      }
    }



  
  }
  
  printf("After sorting\n");
  printArr(arr, size);
  return 0  ;
}
