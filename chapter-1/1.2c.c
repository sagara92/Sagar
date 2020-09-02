#include <stdio.h>

int main(){
    float fahr, cels;
    int low, up, step;

    low = -100;
    up = 500;
    step=10;
    fahr=low;
    while (fahr<=up){
        cels=(5.0/9.0)*(fahr-32.0);
        printf("%4.1f\t%8.3f\n",fahr, cels);
        fahr=fahr+step;
    }
}
