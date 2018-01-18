#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERT1(x)  assert(x>=0 && x<=10000)
#define ASSERT2(x)  assert(x>=1 && x<=10000)

char* kangaroo(int x1, int v1, int x2, int v2) 
    {
        static char result[4];
        
        if(v1>v2 && (x2-x1)%(v1-v2)==0)
            strcpy(result,"YES");
        else
            strcpy(result,"NO");
        return result;
    }

int main() {
    int x1=14; 
    int v1=2; 
    int x2=98; 
    int v2=2; 
    ASSERT1(x1);
    ASSERT1(x2);
    ASSERT2(v1);
    ASSERT2(v2);
    assert(x1<x2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
