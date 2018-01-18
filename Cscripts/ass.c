#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int* appleAndOrange(int s, int t,int a,int b,int apple_size,int* apple,int orange_size,int* orange, int *result_size) 
{

    static int result[2];

    for ( int i = 0; i < apple_size; ++i)
    {
        if((a+apple[i])>=s && (a+apple[i])<=t)result[0]++;
    }
    for ( int i = 0; i < orange_size; ++i)
    {
        if((b+orange[i])>=s && (b+orange[i])<=t)result[1]++;
    }
    return result;    
}

int main() {
    uint8_t  s=2; 
    uint8_t  t=3; 
    uint8_t  a=1; 
    uint8_t  b=5; 
    uint8_t  m=1; 
    uint8_t  n=1;
    int apple[]={2};
    int orange[]={-2};
    int result_size=2;
    int* result = appleAndOrange(s, t, a, b, m, apple, n, orange, &result_size);
    for( int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
} 
