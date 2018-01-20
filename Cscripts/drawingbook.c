#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int p)
{
	int back;
	int front=p/2;
	if(n%2==0) back=((n-p)==1) ? 1 : (n-p)/2;
	else back=(n-p)/2;
	int result=(front<back) ? front : back;
	return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    assert(n>=1 && n<=100000);
    int p; 
    scanf("%d", &p);
    assert(p>=1 && p<=n);
    int result = solve(n, p);
    printf("%d\n", result);
    return 0;
}
