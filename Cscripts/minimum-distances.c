#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int minimumDistances(int a_size, int* a) 
{
    int* arr=malloc(sizeof(int)*(a_size/2));
    int count=0;
    int min=1001;
    int result;
    for (int i = 0; i < a_size-1; ++i)
    {
        for (int j =i+1; j < a_size; ++j)
        {
            if(a[i]==a[j])
            {
                // printf("a[%d]=%d a[%d]=%d \n",i,a[i],j,a[j] );
                arr[count]=j-i;
                // printf("arr[%d]=%d \n\n",count,arr[count] );
                count++;
            }
        }
    }
    if (count==0)result=-1;
    else 
    {
        for (int i = 0; i < (a_size/2); ++i)
        {
            if(min>arr[i] && arr[i]!=0)
            {
                min=arr[i];
                result=min;
            }
        }
    }
    return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=1000);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
        assert(a[a_i]>=1 && a[a_i]<=100000);
    }
    int result = minimumDistances(n, a);
    printf("%d\n", result);
    return 0;
}
