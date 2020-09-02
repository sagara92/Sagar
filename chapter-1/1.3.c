#include <stdio.h>

main()
{
    printf("Conversion table from Farenheit to Celsius.\n F \t\t C\n");
    float fnh, cel;
    int min, max, step;
    min=-50;
    max=300;
    step=5;
    fnh=min;
    while(fnh<=max){
        cel=(5.0/9.0)*(fnh-32.0);
        printf("%4.0f \t\t%4.4f\n",fnh,cel);
        fnh=fnh+step;
    }
}
