#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void counterGame(long int n) 
{
    int count = 0 ;
    while(n) {
        n &= (n-1) ;
        count ++ ;
    }
    (count-1 & 1 )?puts("Louise"):puts("Richard");    
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        long int n; 
        scanf("%li", &n);
        counterGame(n);
    }
    return 0;
}
