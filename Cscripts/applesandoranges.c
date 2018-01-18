#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* appleAndOrange(int s, int t, int a, int b, int apple_size, int* apple, int orange_size, int* orange, int *result_size) 
{

    static int result[2];

    for (int i = 0; i < apple_size; ++i)
    {
        if((a+apple[i])>=s && (a+apple[i])<=t)result[0]++;
    }
    for (int i = 0; i < orange_size; ++i)
    {
        if((a+orange[i])>=s && (a+orange[i])<=t)result[1]++;
    }
    return result;    
}

int main() {
    int s; 
    int t; 
    scanf("%i %i", &s, &t);
    assert(s >=0 && s <= 10000 );
    assert(t >=0 && t <= 10000 );
    int a; 
    int b; 
    scanf("%i %i", &a, &b);
    assert(a >=0 && a <= 10000 );
    assert(b >=0 && b <= 10000 );
    assert(a<s && s<t && t<b );
    int m; 
    int n; 
    scanf("%i %i", &m, &n);
    assert(m >=0 && m <= 10000 );
    assert(n >=0 && n <= 10000 );
    int *apple = malloc(sizeof(int) * m);
    for (int apple_i = 0; apple_i < m; apple_i++) {
       scanf("%i",&apple[apple_i]);
        assert(apple[apple_i] >=-10000 && apple[apple_i] <= 10000 );

    }
    int *orange = malloc(sizeof(int) * n);
    for (int orange_i = 0; orange_i < n; orange_i++) {
       scanf("%i",&orange[orange_i]);
        assert(orange[orange_i] >=-10000 && orange[orange_i] <= 10000 );

    }
    int result_size=2;
    int* result = appleAndOrange(s, t, a, b, m, apple, n, orange, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
	