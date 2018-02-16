#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int workbook(int n, int k, int arr_size, int* arr) 
{
    int pages=0;
    int match=0;
    for (int i = 0; i < arr_size; ++i)
    {
        pages++;
        for (int j = 1; j <= arr[i]; ++j)
        {
            printf("pages=%d j=%d arr[i]=%d\n",pages,j,arr[i] );
            if(pages==j)
                {
                    match++;
                    printf("match=%d pages=%d j=%d\n",match,pages,j );
                }

            if(j%k==0 && j!=arr[i])
            {
                pages++;
            }
            else if(j%k==0 && j==arr[i])break;
        }
    }
    return match;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    int result = workbook(n, k, n, arr);
    printf("%d\n", result);
    return 0;
}
