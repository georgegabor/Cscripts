#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n){
    char str[n];
    memset(str,' ',n);
    for (int i = 0; i <= n; ++i)
    {
        memset(str, '#',i);
        printf("%s \n", str);
    }
    
}

int main()
{
    int n; 
    scanf("%d",&n);
    staircase(n);
    return 0;
}