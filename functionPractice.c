#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

void convertData(char *name, float height, float weight)
{
	//converts feet to centimeters
	height = height * 12 * 2.54;
	//converts pounds to kilograms
	weight = weight * .453592;
	printf("%s is %.1f cms tall and weighs %.2f kg\n", name, height, weight);
}

//function that takes two numbers, adds them together, and returns a float
float addNumbers(float num1, float num2)
{
	return num1 + num2;
}

//void method that takes a memory pointer to a number, and changes it's value.
//this will fully change the value outside the function, not just inside of it.
void changeNumber(int *number)
{
	*number = 98765;
}

int main(int argc, const char * argv[])
{
	char *name = "Levi";

	//calls the "convertData" function, passing in the person's name,
	//height in feet, and weight in pounds
	convertData(name, 6.3, 140);

	//calls the "addNumbers" function, passing in 2 and 6, and saves
	//the returned value to "result"
	float result = addNumbers(2, 6);
	printf("2 + 6 = %f\n", result);

	int number = 12345;
	//calls the "changeNumber" function, passing in the memory address
	//of "number", rather than passing in "number" itself
	changeNumber(&number);

	printf("New number value: %d\n", number);
	return 0;
}