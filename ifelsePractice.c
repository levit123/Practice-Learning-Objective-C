#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

int main(int argc, const char * argv[])
{
	int age = 16;
	printf("Enter your age: ");
	//reads user input; the "%i" means we're reading user input for an int
	scanf("%i", &age);

	if (age <= 6)
	{
		printf("You're in kindergarten\n");
	}
	else if (age <= 13)
	{
		printf("You're in Elementary\n");
	}
	else if (age <= 18)
	{
		printf("You're in High School\n");
	}
	else
	{
		printf("You're an adult, you're free now!\n");
	}

	//determines if the user is in elementary or not.
	//1 for true, 0 for false
	bool isInElementary = ((age == 12) || (age == 13));
	printf("Are you in elementary? %d\n", isInElementary);

	printf("The opposite of true is: %d\n", (!true));

	//uses the ternary operator "?" to determine if
	//the user is in high school or not. If age is
	//greater than 13, assign a value of 1. Otherwise,
	//assign a value of 0
	bool isInHighSchool = (age > 13 && age < 19) ? 1 : 0;
	printf("Are you in high school? %d\n", isInHighSchool);

	return 0;
}