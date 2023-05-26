
#include <stdio.h>


int main(int argc, char *argv[])
{

  int arr[3][3] = {
            {1, 2, 3}, 
            {4,5, 6},
            {7, 8 ,9}

  };

  //int right = 1 , down = 1 , left = 3 , top = 4 , dirVector = 0;  
  int row = 3 , col =3 ;
  int dirVector = 0  , right = col , down = row , overDown = 0, left = col-1 , top = row- 1 ;



  for (int i = 0;  i <  row ; i++    ) {
      
  
    if (dirVector == 0 ) {

      for (int j=0 ; j < right; j++) {

        printf(" %d ", arr[i][j]);
      
      }
      dirVector+=1;
      down-=1;
      overDown+=1;
        printf("\n");
    }
    if (dirVector == 1 ) {

      for (int j=0; j < down; j++ ){

        if (j == 0) {
        printf(" %d ", arr[overDown][down]);
          
        
        }
      
      }
      dirVector +=1;
      right -=1;
        printf("\n");

    }
    if (dirVector == 2 ) {

      for (int j=left ; j >= 0 ; j--){

        printf(" %d ", arr[down][j]);
      
      }
      dirVector +=1;

      down-=1;
        printf("\n");
    }
    if (dirVector == 3 ) {

      for (int j=top; j >= 0 ; j--){

        printf(" %d ", arr[j][right]);
      
      }
      dirVector =0;
      top-=1;
      left-=1;
        printf("\n");
    }
  }


  return 0;
}
