#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main()
{
	printf("\nChar --> %18ld\n", sizeof(char) *8);
	printf("Short -->  %16ld\n", sizeof(short) *8);
	printf("Int -->    %16ld\n", sizeof(int) *8);
	printf("Long -->   %16ld\n", sizeof(long) *8);
	printf("Float -->  %16ld\n", sizeof(float) *8);
	printf("Double --> %16ld\n", sizeof(double) *8);
	printf("Signed --> %16ld\n", sizeof(signed) *8);
	printf("Unsigned --> %14ld\n", sizeof(unsigned) *8);

	/*printf("\n SIZEMIN=%36zu\n", SIZE_MIN);*/
	printf("\nSIZEMAX =%36zu\n", SIZE_MAX);


	printf("\nFLTMIN =%36e\n", FLT_MIN);
	printf("FLTMAX =%36e\n", FLT_MAX);

	printf("\nShortMIN =%36d\n", SHRT_MIN);
	printf("ShortMAX =%36d\n", SHRT_MAX);

	printf("\nLONGMIN =%36ld\n", LONG_MIN);
	printf("LONGMAX =%36ld\n", LONG_MAX);

	printf("\nx=%d\na=%d\nh=%d\nA=%d\n",'x','a','h','A');
	printf("\nDoes it work now ? \n");
	printf("Yes, it does !!!!   Hurrayyy\n" );
	return 0;
}
