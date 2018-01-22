#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int magicSquares[8][9]={{8,1,6,3,5,7,4,9,2},
						{4,9,2,3,5,7,8,1,6},
						{6,1,8,7,5,3,2,9,4},
						{2,9,4,7,5,3,6,1,8},
						{8,3,4,1,5,9,6,7,2},
						{6,7,2,1,5,9,8,3,4},
						{4,3,8,9,5,1,2,7,6},
						{2,7,6,9,5,1,4,3,8}};

int formingMagicSquare( int s[]) 
{	
	int diff=100;
	int sum=101;
	int result;
	for (int i = 0; i < 8; ++i)
	{
		printf(" %d.\n",i+1);
		printf("diff=%d\n",diff );
		sum=0;
		for (int j = 0; j < 9; ++j)
		{
			sum+=abs(magicSquares[i][j]-s[j]);
			printf("magicSquares=%d",magicSquares[i][j] );
			printf(" s=%d sum=%d\n",s[j], sum );
			if(j==8)
			{
 				if(sum<diff)diff=sum;
			}
		}	
		result=diff;
	}
	return result;
}

int main() {
    int s[9];
    for (int i = 0; i < 9; i++) 
    {  
      	scanf("%i",&s[i]);
      	assert(s[i]>=1 && s[i]<=9);
       
    }
    int result = formingMagicSquare(s);
    printf("%d\n", result);
    return 0;
}