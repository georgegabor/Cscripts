#include <stdio.h>

/*Print Fahrenheit Celsius table
	for fahr = 0,20, ..., 300 */

int main()
{
	float Fahrenheit, Celsius;
	float upper, lower, step;

	lower=0;	/*lower limit*/
	upper=300;	/*upper limit*/
	step=20;	/*size of steps*/

	printf("This program converts Fahrenheit to Celsius !!! Bloody enjoy it !!!!\n");
	printf("\t%3s \t%6s", "Fahrenheit","Celsius\n");

	Fahrenheit=lower;
	while(Fahrenheit<=upper) {
		Celsius=5*(Fahrenheit-32)/9;
		printf("\t%3.0f \t\t%6.1f\n", Fahrenheit, Celsius);
		Fahrenheit+=step;
	}
	return 0;
}