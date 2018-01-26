#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int viralAdvertising(int n) 
{
	int sum=0;
	int m=5;
	int k=0;
	for (int i = 0; i < n; ++i)
	{
		/*printf("m=%d\n",m );*/
		 sum=m/2;
		 m=sum*3;
		 k+=sum;
		 /*printf("i=%d sum=%d m=%d\n",i,sum,m );*/
	}
	int result=k;
	return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=50);
    int result = viralAdvertising(n);
    printf("%d\n", result);
    return 0;
}

