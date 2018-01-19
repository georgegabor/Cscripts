#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int* ar) 
{
	int current=0;
	int max=1;
	int counterArray[6]={0};
	for (int i = 0; i < n; ++i)counterArray[ar[i]]++;
	for (int i = 0; i < 6; ++i)
		{
			if(counterArray[i]>current)
			{
				current=counterArray[i];
				max=i;
			}
		}			
	return max;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=5 && n<200000);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
       assert(ar[ar_i]>=1 && ar[ar_i]<=5);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}