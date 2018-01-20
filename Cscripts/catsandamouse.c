#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERT(x) assert(x>=1 && x<=100)

char** catAndMouse(int x, int y, int z, int *result_size) 
{
    int catA=abs(z-x);
    int catB=abs(z-y);
    char* string1=malloc(sizeof(int)*6);
    strcpy(string1,"Cat A");
    char* string2=malloc(sizeof(int)*6);
    strcpy(string2,"Cat B");
    char* string3=malloc(sizeof(int)*8);
    strcpy(string3,"Mouse C");
    char** p=malloc(sizeof(int));
    if(catA<catB) *p=string1;
    else if (catA>catB) *p=string2;
    else *p=string3;
    return p;
}

int main() {
    int q; 
    scanf("%i", &q);
    ASSERT(q);
    for(int a0 = 0; a0 < q; a0++)
    {
        int x; 
        int y; 
        int z; 
        scanf("%i %i %i", &x, &y, &z);
        ASSERT(x);
        ASSERT(y);
        ASSERT(z);
        int result_size=1;
        char** result = catAndMouse(x, y, z, &result_size);
        for(int result_i = 0; result_i < result_size; result_i++) {
            if(result_i) {
                printf(" ");
            }
            printf("%s", result[result_i]);
        }
        puts("");    
    }
    return 0;
}
