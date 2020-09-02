#include <stdio.h>

main()
{
    printf("Conversion table from Celsius to Farenheit.\n C \t\t F\n");
    float cel;
    for(cel=-50; cel<=50; cel=cel+0.5)
        printf("%4.1f\t\t%4.3f\n",cel,(9.0/5.0)*cel+32.0);
}
