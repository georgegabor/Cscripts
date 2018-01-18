#include <stdio.h>

int main(void)
{
	/* playing with pointers */
	int a = 6789;
	int* p = &a;
	printf("value of 'a' : %d\n",a );
	printf("address of 'a' where 'p' points to also the content of 'p' : %d\n",p);
	printf("address of 'a' by '&' : %d\n",&a );
	printf("address of 'p' : %d\n",&p );
	printf("the value where 'p' points to : %d\n",*p );
	*p = 9;
	printf("After new assignment to '*p' :\n");
	printf("'a' is : %d\n",a );
	printf("address of 'a' where 'p' points to :%d\n",p );
	printf("size of 'a' %lu bits\n",sizeof(a) *8);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",*p+i );
	}
	return 0;
}