#include <stdio.h>

#define IN 1    //inside a word
#define OUT 0   //outside a word 

int main(){
    char c;
    int state;

    state = OUT;
    while((c = getchar()) != EOF){
        if(c != ' ' && c != '\t' && c != '\n'){
            putchar(c);
            state = IN;
        }
        else if(state){
            putchar('\n');
            state = OUT;
        }
    }

    return 0;
}