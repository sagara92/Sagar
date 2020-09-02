#include <stdio.h>
/*print Farenheit-Celsius table for fahr = 0,20,....,300*/
int main()
{
    printf("Farenheit-Celcius table\n");
    int fahr, cels;
    int lower, upper, step;

    lower=-100; /*lower limit of the table*/
    upper=300; /*upper limit of the table*/
    step=20;

    fahr=lower;
    while(fahr<=upper){
        cels=5*(fahr-32)/9;
        printf("%4d\t%d\n", fahr, cels);
        fahr=fahr+step;
    }


}
