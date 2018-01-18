#include <stdio.h>
#include <stdlib.h>

char ga[] = "abcdefghijklm";

void my_array_func( char ca[] )
{
	printf(" addr of array param = %p \n",&ca);
	printf(" addr (ca[0]) = %p \n",&(ca[0]));
	printf(" addr (ca[1]) = %p \n",&(ca[1]));
	printf(" value (ca[0]) = %c \n",ca[0]);
	printf(" value (ca[1]) = %c \n\n",ca[1]);
}

void my_pointer_func( char *pa )
{
	printf(" addr of ptr param = %p \n",&pa);
	printf(" addr (pa[0]) = %p \n",&(pa[0]));
	printf(" addr (pa[1]) = %p \n",&(pa[1]));
	printf(" value (pa[0]) = %c \n",pa[0]);
	printf(" value (pa[1]) = %c \n\n",pa[1]);
}

int main()
{
	printf(" addr of global array = %p \n",&ga);
	printf(" addr (ga[0]) = %p \n",&(ga[0]));
	printf(" addr (ga[1]) = %p \n\n",&(ga[1]));
	my_array_func( ga );
	my_pointer_func( ga );
	printf(" %ld byte\n",sizeof((ga[1])) );
	printf(" %ld byte\n",sizeof((ga[2])) );

}