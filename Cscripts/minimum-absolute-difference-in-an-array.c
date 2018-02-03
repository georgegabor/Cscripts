#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void minimumAbsoluteDifference(int n, int arr_size, int* arr) 
{
    int min=1000000000;
    int i=0, j;
    qsort(arr,arr_size,sizeof(int),cmpfunc);
    while( j < arr_size && min!=0)
        {
            j=i+1;
            // printf("\narr[%d]=%d arr[%d]=%d min=%d\n",i,arr[i],j,arr[j],min );
            if(abs((arr[i])-(arr[j]))<min)
                {
                    min=abs((arr[i])-(arr[j]));
                    
                    // printf("If %d\n",min );
                }
            i++;    
        }
    
    printf("%d\n",min );
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=2 && n<=100000);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
        assert(arr[arr_i]>=-1000000000 && arr[arr_i]<=1000000000);
    }
    minimumAbsoluteDifference(n, n, arr);
    return 0;
}
