#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a=10;
	int array[]={1,2,-3,-4};
	for (int i = 0; i < 4; ++i)
	{
		printf("%d\n", a+array[i] );
	}
	return 0;
}