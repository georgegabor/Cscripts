#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "07:05:45PM";
   const char s[2] = ":";
   int token;
   
   /* get the first token */
   token =atoi(strtok(str, s));
   
   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %d\n", token );
    
      token = strtok(NULL, s);
   }
   
   return(0);
}