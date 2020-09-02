#include <stdio.h>

main()
{
    printf("Conversion table from Celsius to Farenheit.\n C \t\t F\n");
    float fnh, cel,step;
    int min, max;
    min=-50;
    max=50;
    step=0.5;
    cel=min;
    while(cel<=max){
        fnh=(9.0/5.0)*cel+32.0;
        printf("%4.1f \t\t%4.4f\n",cel,fnh);
        cel=cel+step;
    }
}
