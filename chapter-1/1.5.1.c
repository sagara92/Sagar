/*read a character*/
#include <stdio.h>
main()
{
    int c;
    c=getchar();
    while (c !=EOF){
        putchar(c);
        c=getchar();
    }
}

//alternative version of copying input//
//main()
//{
//    int c;
//    while((c=getchar())!=EOF)
//        putchar(c);
//}
