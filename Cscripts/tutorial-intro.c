#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void introTutorial(int V, int arr_size, int* arr) 
{
    for (int i = 0; i < arr_size; ++i)
    {
        if(arr[i]==V)printf("%d\n",i );
    }
}

int main() {
    int V; 
    scanf("%i", &V);
    assert(V>=-1000 && V<=1000);
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=1000);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    introTutorial(V, n, arr);
    return 0;
}
