#include <stdio.h>

/* power = raise base to the n-th power, n>=0 */

long int power(int base, int n)
{
	long int i, p;
	p=1;
	for (i = 1; i <=n; ++i)
		p=p*base;
		return p;
}

/* test power function*/

main()
{
	long int i;
	for (i = 0; i < 10; ++i)
		printf("%3ld.th --> %6ld %6ld\n",i, power(2,i), power(-3,i));			
}


