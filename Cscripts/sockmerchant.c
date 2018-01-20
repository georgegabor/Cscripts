#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERT(x) assert(x>=0 && x<=100)

int sockMerchant( int ar_size, int* ar) 
{
    int array[101]={0};
    int match=0;
    for (int i = 0; i < ar_size; ++i)
    {
        array[ar[i]]++;        
    }
    for (int i = 0; i < 101; ++i)
    {
        match+=(array[i]/2);
    }
    int result=match;
return result;    
}

int main() {
    int n; 
    scanf("%i", &n);
    ASSERT(n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
       ASSERT(ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    free(ar);
    return 0;
}
