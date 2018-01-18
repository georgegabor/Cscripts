#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERT(x)  assert(x>=1 && x<=100);

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size)
{
    // Complete this function
    static int result[2]={0,0};
    int numA[3]={a0,a1,a2};
    int numB[3]={b0,b1,b2};
    for (int i = 0; i <= 2; ++i)
        {
            if(numA[i]>numB[i])
                result[0]++;
            else if (numA[i]<numB[i])
                result[1]++;
        }    

    return result;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    ASSERT(a0);
    ASSERT(a1);
    ASSERT(a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    ASSERT(b0);
    ASSERT(b1);
    ASSERT(b2);
    int result_size=2;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
