#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERTD(x) assert(x>=1 && x<=31)
#define ASSERTM(x) assert(x>=1 && x<=12)
#define ASSERTY(x) assert(x>=1 && x<=3000)

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) 
{
    int fine;
    if(d1<=d2 && m1<=m2 && y1<=y2)fine=0;
    else if(d1>d2 && m1==m2 && y1==y2)fine=15*(d1-d2);
    else if(m1>m2 && y1==y2)fine=500*(m1-m2);
    else if(y1>y2)fine=10000;
    return fine;
}

int main() {
    int d1; 
    int m1; 
    int y1; 
    scanf("%i %i %i", &d1, &m1, &y1);
    ASSERTD(d1);
    ASSERTM(m1);
    ASSERTY(y1);
    int d2; 
    int m2; 
    int y2; 
    scanf("%i %i %i", &d2, &m2, &y2);
    ASSERTD(d2);
    ASSERTM(m2);
    ASSERTY(y2);    
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    printf("%d\n", result);
    return 0;
}
