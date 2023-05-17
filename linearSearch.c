
#include <stdio.h>


int linearSearch(int arr[], int arrLen, int target){

  for (int i = 0; i < arrLen; i++ ) {

    if (arr[i] == target) {

      return i;
    
    }
  
  }


  return -1;
}

int main(int argc, char *argv[])
{
  int size , target;
  // get the size of the array
  scanf("%d", &size);
  int arr[size];

  for (int i = 0 ; i < size; i++ ) {

    scanf("%d" , &arr[i]);
  
  }
  // getting the target
  scanf("%d", &target);

  int res = linearSearch( arr, sizeof(arr), target);

  if (res == -1 ) {
    printf("Element not found\n");
  
  }
  else {
  
    printf("The index of the target is %d \n", res);
  }
  return 0;

}
