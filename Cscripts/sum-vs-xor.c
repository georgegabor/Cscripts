#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void solve(long int n) 
{
	unsigned long long int count=0;
	        while (n > 0)
	        {
	            if ((n & 1) == 0)
	                count++;
	            n=n>>1;
	        }
	// unsigned long long int sum= 1 << count;
	unsigned long long int sum= pow(2,count);
	printf("%lld\n",sum );
}

int main() {
    long int n; 
    scanf("%li", &n);
    solve(n);
    return 0;
}
