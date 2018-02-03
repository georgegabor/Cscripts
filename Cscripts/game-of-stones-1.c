#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void gameOfStones(int n) 
{
    int m=n%7;
    switch ( m ) 
    {
            case 0:        
                printf( "Second\n" );
                break;        
            case 1:            
                printf( "Second\n" );
                break;
            case 2:          
                printf( "First\n" );
                break;
            case 3:         
                printf( "First\n" );
                break;
            case 4:        
                printf( "First\n" );
                break;
            case 5:        
                printf( "First\n" );
                break;
            case 6:        
                printf( "First\n" );
                break;
    }
}

int main() {
    int t; 
    scanf("%i", &t);
    assert(t>=1 && t<=100);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%i", &n);
        assert(n>=1 && n<=100);
        int result_size;
        gameOfStones(n);
    }
    return 0;
}
