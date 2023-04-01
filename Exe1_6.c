#include <stdio.h>

int main(){
    int c;

    while((c = getchar()) != EOF){
        putchar(c);
        printf("\n%d", (c != EOF));
    }
    return 0;
}