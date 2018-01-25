#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* utopianTree(int* ar,int t) 
{
    int height=1;
    int* result=malloc(sizeof(int)*t);
    for (int i = 0; i < t; ++i)
    {
        if(ar[i]>0)
    
                {
                    height=1;
                    for (int j = 1; j <= ar[i]; ++j)
                    {
                    if(j%2==1)height*=2;
                    else height++;
                    }                
                    result[i]=height;
                }
        else result[i]=height;        
    }            
    return result;
}

int main() {
    int t; 
    scanf("%i", &t);
    assert(t>=1 && t<=10);
    int* ar=malloc(sizeof(int)*t);
    for(int a0 = 0; a0 < t; a0++){
        scanf("%i", &ar[a0]);
        assert(ar[a0]>=0 && ar[a0]<=60);
    }
    int* result = utopianTree(ar,t);
    for (int i = 0; i < t; ++i)
    {
        printf("%d\n", result[i]);        
    }
    free(ar);
    free(result);    
    return 0;
}
