#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void appendAndDelete(char* s, char* t, int k) 
{
    int sl = strlen(s); int tl = strlen(t); int diffi=0;  

    int i,m;
    for(i=0;s[i]==t[i];i++); //going till matching
    diffi=i; 
    m = sl+tl-2*diffi;

    ((k>=m&&(k-m)%2==0)||(sl+tl<=k))?printf("Yes"):printf("No");
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s", t);
    int k; 
    scanf("%i", &k);
    int result_size;
    appendAndDelete(s, t, k);
    return 0;
}
