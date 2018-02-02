#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int beautifulTriplets(int d, int arr_size, int* arr) 
{
    int count=0;
    for (int i = 0; i < arr_size-2; ++i)
    {
        for (int j = i+1; j < arr_size-1; ++j)
        {
            if ((arr[j] - arr[i])==d)
                {
                for (int k = j+1; k < arr_size; ++k)
                {
                    if(arr[k]-arr[j]==d)count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n; 
    int d; 
    scanf("%i %i", &n, &d);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    int result = beautifulTriplets(d, n, arr);
    printf("%d\n", result);
    return 0;
}
