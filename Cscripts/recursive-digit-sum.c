#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sumUp(unsigned long long int number)
{
	unsigned long long int sum=0;
	int count=0;
	while(number != 0)
	    {
	        int rem=number%10;
	        number/=10;
	        sum+=rem;
	        ++count;
	    }
	if(count!=1)
	{
		sumUp(sum);
	}
	else printf("%lld\n", sum);

}

void concat(char* n,int k)
{	
	unsigned long long int sum=0;
	for (int i = 0; i < strlen(n); ++i)
	{
		sum+=(n[i]-48);
	}
	// printf("sum=%lld\n",sum );
	unsigned long long int t=(sum%9)*k;
	// printf("rem=%lld t=%lld\n",sum,t);
	if(t==0)puts("9");
	else sumUp(t);
}


int main() {
    char* n = (char *)malloc(512000 * sizeof(char));
    int k; 
    scanf("%s %i", n, &k);
    assert(k>=1 && k<=100000);
    concat(n, k);
    free(n);
    return 0;
}
 