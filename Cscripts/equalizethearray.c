#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int equalizeArray(int arr_size, int* arr) 
{
    int zero[101]={0};
    int max=0;
    int sum=0;
    for (int i = 0; i < arr_size; ++i)
    {
        zero[arr[i]]++;
    }
    for (int i = 0; i <= 100; ++i)
    {
        sum+=zero[i];
        if(max<zero[i])max=zero[i];
    }
    return sum-max;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=100);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
        assert(arr[arr_i]>=1 && arr[arr_i]<=100);
    }
    int result = equalizeArray(n, arr);
    printf("%d\n", result);
    return 0;
}
