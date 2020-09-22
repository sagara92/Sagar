/*Leap year*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int leap;

	printf("Enter a year to check for leap year:");
	scanf("%d", &leap);
	if ((leap % 4 == 0 && leap % 100 != 0) || leap % 4 == 400)
	{
		printf("%d is a leap year.\n", leap);
	}
	else
		printf("%d is not a leap year.\n", leap);
	return 0;
}