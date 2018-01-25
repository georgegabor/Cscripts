#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERT(x) assert(x>=1 && x<=100)

int hurdleRace(int k, int height_size, int* height) 
{
    int max=0;
    for (int i = 0; i < height_size; ++i)
    {
        if(height[i]>max)max=height[i];
    }
    int result=(max>k)?max-k:0;
    return result;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    ASSERT(n);
    ASSERT(k);
    int *height = malloc(sizeof(int) * n);
    for (int height_i = 0; height_i < n; height_i++) {
       scanf("%i",&height[height_i]);
        ASSERT(n);
    }
    int result = hurdleRace(k, n, height);
    printf("%d\n", result);
    return 0;
}
