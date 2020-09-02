#include <stdio.h>
//#define NC ' '
int main()
{
    int c;//, lastchar;
 //   lastchar= NC;
    while((c=getchar())!= EOF){
        if(c=='\t'){
           putchar('\\');
            putchar('t');
            continue;}

        if (c=='\b'){
            putchar('\\');
            putchar('b');
            continue;}

        if (c=='\\'){
            putchar('\\');
            putchar('\\');
            continue;}

            putchar(c);
        }
        }
