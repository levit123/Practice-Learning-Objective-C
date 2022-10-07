#include <stdio.h>
#include <math.h>
#include <float.h>

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

	return 0;
}