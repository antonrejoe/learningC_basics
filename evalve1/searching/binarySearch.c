
#include <stdio.h>

int binarySearch(int arr[],int target , int low , int high){

  while (low <=high) {

    int mid = low + ( high - low )/2;

    if (arr[mid]==  target) {

      return mid;
    }
    else if (arr[mid] > target) {
      high = mid -1 ;
    
    }
    else if (arr[mid] < target) {
      low = mid +1;
    
    }

  
  }
  return -1;
  
}


int main(int argc, char *argv[])
{   
  int n , target;
  // getting the number of elements in the array
  scanf("%d", &n);
  int array[n];
  // getting the elements of the array
  for (int i =  0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  // getting the target element 
  scanf("%d", &target);
  int res =   binarySearch(array, target, 0, n-1);

  if (res == -1) {
    printf("not found -1");
  
  }
  else {
    printf("found %d", res); 
  }
  return 0  ;

}
