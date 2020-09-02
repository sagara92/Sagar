#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
        int c, nc, position;
        nc=0;
        position = OUT;
        while((c=getchar())!= EOF){
            nc++;
            printf("_");
            if (c==' ' || c== '\n' || c== '\t'){
                position=OUT;}
            else if (position==OUT){
                position=IN;
                putchar('\n');

            }


        }
}
