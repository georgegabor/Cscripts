#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int divisibleSumPairs(int n, int k, int ar_size, int* ar) 
{
	int count=0;
	for (int i = 0; i < ar_size; ++i)
	{
		int sum=0;
		for (int j = 0; j < ar_size; ++j)
		{
			sum=ar[i]+ar[j];
			if(sum%k==0 && i!=j)
			{
				count++;
			}				
		}
	}
	int result=count/2;
	return result;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    assert(n>=2 && n<=100);
    assert(k>=1 && n<=100);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
	    assert(ar[ar_i]>=1 && ar[ar_i]<=100);
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}
