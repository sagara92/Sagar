#include<stdio.h>

#define Initial ' '

int main()
{
    int c, lc;
    lc= Initial;
    while((c=getchar()) != EOF){
        if (c==' '){
            if(lc!= ' '){
                putchar(c);
            }}
        else{
            putchar(c);}
            lc=c;
    }
  return 0;
}
