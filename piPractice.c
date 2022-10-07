#include <stdio.h>
#include <math.h>
#include <float.h>

int main(int argc, const char * argv[])
{
	float pi = 3.1415926;
	//adds .0000001 to Pi, which won't display because that
	//would add a 7th digit after the decimal
	printf("3.1415926 + .0000001 = %.7f\n", pi + .0000001);
	//FLT_DIG returns the maximum number of digits after
	//a decimal point possible in a float
	printf("Precise Decimal Digits : %d\n", FLT_DIG);
	return 0;
}