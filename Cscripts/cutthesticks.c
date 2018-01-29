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

int* cutTheSticks(int arr_size, int* arr, int *result_size) 
{
    int min=1001;
    int count;
    int count1=0;
    int* result=malloc(sizeof(int)*arr_size);
    qsort(arr, arr_size, sizeof(int),cmpfunc);
    while(arr[arr_size-1]>0)
    {
        count=0;
        for (int i = 0; i < arr_size; ++i)
        {
            printf("\nThis is min : arr[%d]=%d ",i,arr[i] );
            if(arr[i]>0)
            {
                min=arr[i] ;
                printf("min=%d\n",min );
                break;
            }
        }
        for (int i = 0; i < arr_size; ++i)
        {
            if(arr[i]>0)
            {
                printf("arr=%d ",arr[i] );
                arr[i]-=min;
                printf("arr[%d]=%d\n",i,arr[i] );
                count++;
            }
        }
        printf("count=%d\n\n",count );
        count1++;
        result[count1-1]=count;
    }
    *result_size=count1;
    return result_size,result;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=1000);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
        assert(arr[arr_i]>=1 && arr[arr_i]<=1000);
    }
    int result_size;
    int* result = cutTheSticks(n, arr, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
