#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int s_size, int* s, int d, int m){
    int result = 0;
    
    for (int i=0; i<n; i++)
    {
        int limit = i + m;
        if (limit > n)
        {
            break;
        }
        
        int sum = 0;
        for (int j=i; j<limit; j++)
        {
            sum += s[j];
        }
        
        if (sum == d)
        {
            ++result;
        }
    }
    
    return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    assert(n>=1 && n<=100);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
        assert(s[s_i]>=1 && s[s_i]<=5);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    assert(d>=1 && d<=31);
    assert(m>=1 && m<=12);
    int result = solve(n, n, s, d, m);
    printf("%d\n", result);
    return 0;
}
