#include <stdio.h>
#include <math.h>
#include <float.h>

int main(int argc, const char * argv[])
{
	//creates a large integer and assigns the maximum value
	int bigInt = 2147483647;
	//adds a 1 to the big integer, which will result in the number
	//turning into the lowest negative possible value,
	//proving that the above value is the maximum value possible
	printf("Big Int : %d\n", bigInt + 1);

	long bigLong = 2147483647;
	printf("Big Long : %ld\n", bigLong + 1);

	//displays the lowest float value possible
	printf("Minimum Float : %e\n", FLT_MIN);
	//displays the highest float value possible
	printf("Maximum Float : %e\n", FLT_MAX);

	return 0;
}