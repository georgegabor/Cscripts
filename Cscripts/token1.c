#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main () {
   char str[80] = "07:05:45PM";
   const char s[2] = ":";
   int token;
   
   /* get the first token */
   token =atoi(strtok(str, s))+12;
   
   printf("%d\n",token );
   
   return(0);
}