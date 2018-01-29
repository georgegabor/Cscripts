#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


int pairs(int k, int arr_size, int* arr) 
{
    int result;
    int count=0;
    int i=0;
    int j=1;
    qsort(arr,arr_size,sizeof(int),cmpfunc);
    while(j<arr_size)
    {
        if(arr[i]+k==arr[j])
        {
            count++;
            i++;
            j++;
        }
        else if(arr[i]+k>arr[j])
        {
            j++;
        }
        else if(arr[i]+k<arr[j])
        {
            i++;
        }
    }
    result=count;
    return result;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    assert(n>=2 && n<=100000);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
       assert(arr[arr_i]>0 && arr[arr_i]<1000000000);

    }
    int result = pairs(k, n, arr);
    printf("%d\n", result);
    return 0;
}
