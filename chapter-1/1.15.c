#include <stdio.h>
#define MIN 50
#define MAX 100
#define STEP 5
main()
{
    printf("If you want conversion from Celsius to Farenheit, enter 1.\n");
    printf("If you want conversion from Farenheit to Celsius, enter 2.\n");
    int c;
    c=getchar();
    if (c=='1')
    CtoF();
    else if (c=='2')
    FtoC();
    else
        printf("Invalid input! Please try again.\n");
    return 0;
}
CtoF()
{
    float C;
    printf("C\t\t F\n");
    for (C=MIN; C<=MAX; C=C+STEP)
        printf("%.0f\t\t %.2f\n",C, (9.0/5.0)*C+32.0);
}
FtoC()
{
    float F;
    printf("F\t\t C\n");
    for (F=MIN; F<=MAX; F=F+STEP)
        printf("%.0f\t\t %.2f\n",F, 5.0*(F-32.0)/9.0);
}

