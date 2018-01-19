#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int diagonalDifference(int a_size_rows, int a[a_size_rows][a_size_rows]) 
{
  int diagonalSum1=0;
  int diagonalSum2=0;
  for (int i = 0; i < a_size_rows; ++i)
  {
    diagonalSum1+=a[i][i];
    diagonalSum2+=a[i][(a_size_rows-1)-i];
    printf("diagonalSum1 = %d\ndiagonalSum2 = %d\n", diagonalSum1, diagonalSum2);
  }
  int result=abs(diagonalSum1-diagonalSum2);
  return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>= -100 && n<=100);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {
      
          scanf("%i",&a[a_i][a_j]);
       }
    }
    int result = diagonalDifference(n,a);
    printf("%d\n", result);
    return 0;
}