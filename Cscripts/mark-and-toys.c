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

int maximumToys(int prices_size, int* prices, int money) 
{
    qsort(prices,prices_size,sizeof(int),cmpfunc);
    int sum=0;
    int max=0;
    int* result=malloc(sizeof(int)*prices_size);
    int count;
    for (int i=0; i < prices_size-1; ++i)
    {
        sum=prices[i];
        int j=i+1;
        count=0;
        while(sum<money && j<prices_size)
        {
            count++;
            sum+=prices[j];
            j++;
            result[i]=count;
        }
    }
    for (int i = 0; i < prices_size; ++i)
    {
        if(result[i]>max)
            {
                max=result[i];
                // printf("max=%d\n",max ); 
            }
    }
    free(result);
    return max;
}

int main() 
{
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    assert(n>=1 && n<=100000);
    assert(n>=1 && k<=1000000000);
    int *prices = malloc(sizeof(int) * n);
    for (int prices_i = 0; prices_i < n; prices_i++) {
       scanf("%i",&prices[prices_i]);
        assert(prices[prices_i]>=1 && prices[prices_i]<=1000000000);
    }
    int result = maximumToys(n,prices, k);
    printf("%d\n", result);
    return 0;
}
