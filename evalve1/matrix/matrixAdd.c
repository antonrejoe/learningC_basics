
#include <stdio.h>


int main(int argc, char *argv[])
{
  int r, c, a[100][100], b[100][100], sum[100][100] ;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);
  
// getting the elements of the matrix
  for (int i = 0; i < r ; ++i ) {
    
    for (int j= 0; j < c; ++j) {

      printf("Enter the element a %d%d:" ,i+1 , j+1 );
      scanf("%d", &a[i][j]); 
      printf("\n");
    }
  }
  for (int i  = 0 ; i < r; ++i) {

    for (int j = 0; j < c ; ++j ) {
    
      printf("Enter the element b %d%d:" ,i+1 , j+1 );
      scanf("%d", &b[i][j]); 
      printf("\n");
    }
  
  }

  for (int i = 0; i < r ; ++i ) {

    for (int j = 0; j < c;  ++ j) {

      sum[i][j] = a[i][j] + b[i][j];
       
     
    }
  }

  // print the resulting array


  for (int i = 0;  i < r; ++i) {

    for (int j = 0;  j < c; ++j) {

      printf("%d\t", sum[i][j]);

      if (j == c -1) {

        printf("\n\n");
      
       } 
    }
  
  }


  return 0;


}
