#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void serviceLane(int from, int to, int* width) 
{
    int min=100000;
    for (; from <= to; ++from)
    {
        if(width[from]<min)min=width[from];
        // puts("if");
        // printf("min=%d\n",min );
    }
    if(min==1)puts("1");
    else if(min==2)puts("2");
    else if(min>=3)puts("3");
}

int main() {
    int n; 
    int t; 
    scanf("%i %i", &n, &t);
    int *width = malloc(sizeof(int) * n);
    for (int width_i = 0; width_i < n; width_i++) {
       scanf("%i",&width[width_i]);
    }
    int k,j;
    for (int i = 0; i < t; ++i)
    {
        scanf("%i %i",&k,&j);
        serviceLane(k,j,width);
    }
    return 0;
}
