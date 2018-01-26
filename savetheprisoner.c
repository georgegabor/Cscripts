#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int saveThePrisoner(int n, int m, int s)
{
    int result=0;
    int sum=((m+s)-1)%n;
    if(sum==0)result=n;
    else result=sum;
     
    return result;
}

int main() {
    int t; 
    scanf("%d", &t);
    assert(t>=1 && t<=100);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int m; 
        int s; 
        scanf("%d %d %d", &n, &m, &s);
        assert(n>=1 && n<=1000000000);
        assert(m>=1 && m<=1000000000);
        assert(s>=1 && s<=n);
        int result = saveThePrisoner(n, m, s);
        printf("%d\n", result);
    }
    return 0;
}
