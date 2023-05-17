
#include <stdio.h>


void printMatrix(int arr[100][100], int  row , int col  ){
  
  for ( int i = 0 ; i < row; ++i) {
    for (int j=0; j < col; ++j) {
    
    printf("%d\t", arr[i][j])  ;

      if ( j == col - 1) {
         printf("\n\n");
      }
    } 
  }
}

int main(int argc, char *argv[])
{
  int a[100][100] , b[100][100] , r, c , mult[100][100];
  
  printf("Enter the number of rows between (0 to 100):\n");
  scanf("%d", &r);

  printf("Enter the number of columns between (0 to 100 ):\n");
  scanf("%d", &c);

  // getting the input for a 
  for (int i = 0; i < r ; ++i) {

    for (int j = 0; j < c; ++j) {
  
    printf("The element a %d%d:", i+1,j+1);
    scanf("%d", &a[i][j]);


    
    }
  }
  for (int i = 0; i < r ; ++i) {

    for (int j = 0; j < c; ++j) {
  

      mult[i][j] = 0;

    
    }
  }
  for (int i = 0; i < r ; ++i) {

    for (int j= 0; j < c; ++j) {
    printf("The element b %d%d:", i+1,j+1);
    scanf("%d", &b[i][j]);


    
    }
  }

  // multiplying the matrices

    for (int i = 0; i < r ; ++i) {
    
      for (int j = 0; j < c ; ++j) {

      for (int k = 0; k < r; ++k) {
        mult[i][j] += a[i][k]*b[k][j];
      
        
      }
      }
  
    }
  printf("The matrix a \n");
  printMatrix(a, r , c);
  printf("The matrix b \n");
  printMatrix(b, r , c);
  printf("The result of the matrix multiplication \n");
  printMatrix(mult, r , c);

  return 0;
}
