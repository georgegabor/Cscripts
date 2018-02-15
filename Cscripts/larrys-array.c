#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void insertionSort(int arr[], int n)
{
   int i, key, j;
   int count=0;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
           count++;
       }
       arr[j+1] = key;
   }
  (count%2==0)?puts("YES"):puts("NO");
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%i", &n);
        int *A = malloc(sizeof(int) * n);
        for (int A_i = 0; A_i < n; A_i++) {
           scanf("%i",&A[A_i]);
        }
        insertionSort(A,n);
    }
    return 0;
}
