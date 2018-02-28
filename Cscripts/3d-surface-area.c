#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int countingRows(int A_size_rows, int A_size_cols, int A[A_size_rows][A_size_cols]) 
{
  int sum = 0;
  for (int i = 0; i < A_size_rows; ++i)
  {
    for (int j = 1; j < A_size_cols; ++j)
    {
      sum += abs ( A[i][j-1] - A[i][j] );
    }
    sum += A[i][0] + A[i][A_size_cols-1];
    // printf("sum%d=%d\n",i,sum );
  }
  // printf("row sum=%d\n",sum );    
  return sum;        
}

int countingColumns(int A_size_rows, int A_size_cols, int A[A_size_rows][A_size_cols]) 
{
  int sum = 0;
  for (int i = 0; i < A_size_cols; ++i)
  {
    for (int j = 1; j < A_size_rows; ++j)
    {
      sum += abs ( A[j-1][i] - A[j][i] );
    }
    sum += A[0][i] + A[A_size_rows-1][i];
    // printf("sum%d=%d\n",i,sum );
  }
  // printf("column sum=%d\n",sum );    
  return sum;        
}

void surfaceArea(int A_size_rows, int A_size_cols, int A[A_size_rows][A_size_cols]) 
{
  int bottomAndTop = A_size_rows * A_size_cols * 2 ;
  int rows = countingRows ( A_size_rows, A_size_cols, A) ;
  int columns = countingColumns ( A_size_rows, A_size_cols, A) ;
  int sum = bottomAndTop + rows + columns;
  // printf("bottomAndTop=%d rows=%d columns=%d ",bottomAndTop, rows, columns );
  printf("%d\n",sum );
}

int main() {
    int H; 
    int W; 
    scanf("%i %i", &H, &W);
    int A[H][W];
    for (int A_i = 0; A_i < H; A_i++) {
       for (int A_j = 0; A_j < W; A_j++) {
      
          scanf("%i",&A[A_i][A_j]);
       }
    }
    surfaceArea(H, W, A);
    return 0;
}
