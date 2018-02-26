#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void howManyGames(int Price, int discount, int minimumPrice, int amountOfMoney) 
{
	int count = 0 ;
	while( Price >= minimumPrice && amountOfMoney >= Price)
	{
		amountOfMoney -= Price ;
		Price -= discount ;
		count++ ;
		// printf("amountOfMoney=%d Price=%d count=%d\n",amountOfMoney, Price, count );
	}
	if( Price <= minimumPrice && amountOfMoney >= minimumPrice)
	{
		count += amountOfMoney / minimumPrice ;
	}
	printf("%d\n",count );
}

int main() {
    int p; 
    int d; 
    int m; 
    int s; 
    scanf("%i %i %i %i", &p, &d, &m, &s);
    howManyGames(p, d, m, s);
    return 0;
}
