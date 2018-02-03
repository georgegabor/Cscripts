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

int* countingSort(int arr_size, int* arr) 
{

    qsort(arr,arr_size,sizeof(int),cmpfunc);
    return  arr;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=0 && n<=1000000);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
        assert(arr[arr_i]>=0 && arr[arr_i]<=100);
    }
    int result_size=n;
    int* result = countingSort(n, arr);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
