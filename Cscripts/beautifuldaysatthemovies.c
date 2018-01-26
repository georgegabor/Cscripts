#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int beautifulDays(int i, int j, int k) 
{
	int result=0;
	int count=0;
	for (i; i <= j; ++i)
	{
		int reversedNumber=0;
		int m=i;
		while(m != 0)
	    {
	        int remainder = m%10;
	        reversedNumber = reversedNumber*10 + remainder;
	        m/= 10;
	    }
		int n=abs(reversedNumber-i);
		if(n%k==0)result++;
	}
	return result;
}

int main() {
    int i; 
    int j; 
    int k; 
    scanf("%i %i %i", &i, &j, &k);
    assert(i>=1 && i<=2000000 && i<=j);
    assert(j>=1 && j<=2000000);
    assert(k>=1 && k<=2000000000);
    int result = beautifulDays(i, j, k);
    printf("%d\n", result);
    return 0;
}

