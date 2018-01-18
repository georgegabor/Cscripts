#include <stdio.h>
#include <string.h>

int main(void) {
    int n,i; 
    char str[50];

    scanf("%d\n",&n);

    memset(str, '#', sizeof(str));

    for(i=1;i<=n;i++)
        printf("%*.*s\n",n,i,str);

    return 0;
}