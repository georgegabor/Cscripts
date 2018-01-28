#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int squares(int a, int b) 
{
    int count=(floor(sqrt(b))-ceil(sqrt(a))+1);
    return count;
}

int main() {
    int q; 
    scanf("%i", &q);
    assert(q>=1 && q<=100);
    for(int a0 = 0; a0 < q; a0++){
        int a; 
        int b; 
        scanf("%i %i", &a, &b);
        assert(a>=1 && a<=b);
        assert(b>=1 && b<=1000000000);
        int result = squares(a, b);
        printf("%d\n", result);
    }
    return 0;
}
