#include <stdio.h>

int main()
{
	/* count characters 2nd version */
	double nc;
	for (nc = 0; getchar()!= 'q' ; ++nc)
	{
		printf("%.0f\n", nc);
		
	}
	printf("%.0f\n", nc);
	return(0);
	
}