#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	/*Character length*/
	/* from calculation*/
	printf("Minumum signed char %d \n",- (char)((unsigned char) ~ 0 >> 1)-1);
	printf("Maximum signed char %d \n", (char)((unsigned char) ~ 0 >> 1) );
	/* from header*/
	printf("Minumum signed char %d\n",SCHAR_MIN );
	printf("Maximum signed char %d\n",SCHAR_MAX );


	/*Integer length*/
	/* from calculation*/
	printf("Minumum signed int %d \n",- (int)((unsigned int) ~ 0 >> 1)-1);
	printf("Maximum signed int %d \n", (int)((unsigned int) ~ 0 >> 1) );
	/* from header*/
	printf("Minumum signed int %d\n",INT_MIN );
	printf("Maximum signed int %d\n",INT_MAX );


	/*Short length*/
	/* from calculation*/
	printf("Minumum signed short %d \n",- (short)((unsigned short) ~ 0 >> 1)-1);
	printf("Maximum signed short %d \n", (short)((unsigned short) ~ 0 >> 1) );
	/* from header*/
	printf("Minumum signed char %d\n",SHRT_MIN );
	printf("Maximum signed char %d\n",SHRT_MAX );


	/*Long length*/
	/* from calculation*/
	printf("Minumum signed long %ld \n",- (long)((unsigned long) ~ 0 >> 1)-1);
	printf("Maximum signed long %ld \n", (long)((unsigned long) ~ 0 >> 1) );
	/* from header*/
	printf("Minumum signed long %ld\n",LONG_MIN );
	printf("Maximum signed long %ld\n",LONG_MAX );



	/*Character length*/
	/* from calculation*/
	printf("Maximum unsigned char %d \n",(unsigned char) ~ 0);
	printf("Maximum unsigned int %u \n", (unsigned int) ~ 0);
	printf("Maximum unsigned short %d \n",(unsigned short) ~ 0);
	printf("Maximum unsigned long %lu \n", (unsigned long) ~ 0);
	/* from header*/
	printf("Maximum signed char %d\n",UCHAR_MAX );
	printf("Maximum signed int %u\n",UINT_MAX );
	printf("Maximum signed short %d\n",USHRT_MAX );
	printf("Maximum signed long %lu\n",ULONG_MAX );
	return 0;
}