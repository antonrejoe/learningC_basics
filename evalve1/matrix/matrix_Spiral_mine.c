
#include <stdio.h>

int row , col , i , j , k  , revRow , revCol ; 

int main(int argc, char *argv[])
{
  printf("Enter the number of rows : \n");
  scanf("%d", &row);
  printf("Enter the number of columns :\n ");
  scanf("%d", &col);

  int matrix[row][col];
  
  
  // getting the input for the matrix 

  for (i = 0 ; i < row; ++i) {

    for (j=0; j < col; ++j) {

      printf("Enter the value of a %d%d : ", i + 1 , j+1);
      scanf("%d", &matrix[i][j]);

      printf("\n");

    
    }
  

  }


  
  for (revCol = 0 , revRow = 0 , k = 0, i = 0   ; i < row && i >=0 ; ) {
    i -=k; 

      if (revRow == 1) {
        --i;
      
      }
    for (j=0 ; j < col || j > col; ) {

      j -=k;     
      if (revCol == 1) {
        --j;
      
      }
      if ( j ==  col -1 ) {
        // do nothing;
        revCol+=1;
      }if (j!= col -1) {
        ++j;
      }
        printf("%d  " , matrix[i][j]);

    }

    if ( i == row -1 ) {
    
      revRow+=1;
    }
    if (i != row -1 ) {

      ++i;
    
    }
    
  }

  return 0;
}
