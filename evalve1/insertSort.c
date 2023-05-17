#include <stdio.h>


void prinArr(int arr[] , int size){

  for (int i = 0; i < size; i++ ) {

    printf("%d", arr[i]);

  printf("\n");
  
  }

}


void insertSort(int arr[] , int size){

  for (int i = 1 ; i < size; i++ ) {

    int key = arr[i];
    
    int j = i -1;

    while ( key <  arr[j] && j>=0 ) {
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = key; 
  
  }
}

int main()
{
  int array[] = { 4, 1, 9 , 5 , 7 };
  printf("The size of the array is  %d\n", sizeof(array)/sizeof(array[0]));
  prinArr(array, sizeof(array)/sizeof(array[0]));
  insertSort(array, 5);
  printf("The sorted array is \n" );
  prinArr(array, sizeof(array)/sizeof(array[0]));
  return 0;
}
