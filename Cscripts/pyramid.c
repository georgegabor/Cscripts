#include <stdio.h>
#include <stdlib.h>
#define p(x) putchar(x)

void pyramid(int y){
	int l=y<<1, x=l;
	while(y)p((y<=l-x&&x>=y)?'*':' '),(!x--)&&(x=l,y--,p('\n'));
}
 
void main(int argc, char *argv[]){
	if(argc != 2){
		printf("use: pyramid <num>\n");
		exit(1);
	}
	pyramid(atol(argv[1]));
}