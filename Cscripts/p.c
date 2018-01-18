#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=5;int x=4;
	printf("\x1b[31m" "%d\n" "\x1b[0m", i);
	printf("%d", x);
	return 0;
}