#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lonelyinteger(int a_size, int* a) 
{
    int result;
    int arr[100]={0};
    int max=0;
    if(a_size==1)result=a[0];
    else
    {
        for (int i = 0; i < a_size; ++i)
        {
            arr[a[i]]++;
            if(a[i]>max)
                {
                    max=a[i];
                }
        }
    }
    for (int i = 0; i <= max; ++i)
    {
        if(arr[i]==1)result=i;
        // printf("arr=%d\n",arr[i] );
    }
    
    return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<100);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%i",&a[a_i]);
        assert(a[a_i]>=0 && a[a_i]<=100);
    }
    int result = lonelyinteger(n, a);
    printf("%d\n", result);
    return 0;
}
