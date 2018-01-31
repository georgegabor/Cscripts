#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

unsigned long long int taumBday(unsigned long long int b, unsigned long long int w, unsigned long long int x, unsigned long long int y, unsigned long long int z)
{
    x = x>y? ((x-y>z)? y+z : x) : x;
    y = y>x? ((y-x>z)? x+z : y) : y;
    unsigned long long int result = b*x+w*y;
    return result;
}

int main() {
    unsigned long long int t; 
    scanf("%llu", &t);
    for(unsigned long long int a0 = 0; a0 < t; a0++){
        unsigned long long int b; 
        unsigned long long int w; 
        scanf("%llu %llu", &b, &w);
        unsigned long long int x; 
        unsigned long long int y; 
        unsigned long long int z; 
        scanf("%llu %llu %llu", &x, &y, &z);
        unsigned long long int result = taumBday(b, w, x, y, z);
        printf("%llu\n", result);
    }
    return 0;
}
