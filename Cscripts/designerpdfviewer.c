#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int designerPdfViewer( int* h, char* word) 
{
    char* p=word;
    int max=0;
    int count=0;
    while(*p!='\0')
    {
        count++;
        if((h[*p-97])>max) 
        {
            max=h[*p-97];
        }
        p++;
    }
    int result=count*max;
    return result;
}

int main() {
    int *h = malloc(sizeof(int) * 26);
    for (int h_i = 0; h_i < 26; h_i++) {
       scanf("%i",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s", word);
    int result = designerPdfViewer(h, word);
    printf("%d\n", result);
    return 0;
}
