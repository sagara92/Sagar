#include <stdio.h>
#include <math.h>

int main()
{
	double c,r;
	printf("input number:\n");
	scanf("%lf", &c);
	r = sqrt((double) c);

	printf("square root is: %.16lf\n", r);
	return 0;
}