#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0
main()
{
    int c, nc, state;
    state = OUT;
    while((c=getchar())!= EOF){
            ++nc;
        if (c== '\ ' || c=='\t'){
            state = OUT;
            }
        else if(state ==OUT){
            state= IN;
            putchar('\n');
            putchar(c);
            }
        else {
            putchar(c);
        }
        }
    }
