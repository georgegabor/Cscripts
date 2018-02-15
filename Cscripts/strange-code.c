#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int strangeCode(long int t) 
{
	long int rem = 3;
	while (t > rem)
	{
	    t = t-rem;
	    rem *= 2;
	}

	
	/*long int x=sqrt(t/3+1);
	long int y=3*pow(2,x);
	long int result=(y+(y-2))-t;*/
	long int result=(rem-t)+1;
	return result;
}

int main() {
    long int t; 
    scanf("%li", &t);
    long int result = strangeCode(t);
    printf("%ld\n", result);
    return 0;
}
