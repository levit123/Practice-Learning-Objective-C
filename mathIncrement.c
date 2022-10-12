#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

int main(int argc, const char * argv[])
{
	int i = 0;
	//first displays value of "i", and then increments "i"
	//by 1 afterwards. So it will display 0 in the console,
	//but after it displays, "i" will be equal to 1.
	printf("i++ = %d\n", i++);
	//increments "i" before displaying it. "i" is at 1
	//before this, and now it will increment and then
	//display. So it will display 2 in the console.
	printf("++i = %d\n", ++i);


	return 0;
}