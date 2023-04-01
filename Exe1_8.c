// Use Ctrl+Z for EOF in linux and Ctrl+D.

#include <stdio.h>

int main(){
    int nl=0;
    int nb=0;
    int nt=0;
    char c;

    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
        else if(c == '\t')
            ++nt;
        else if(c == ' ')
            ++nb;
    
    printf("Number of lines: %d\n", nl);
    printf("Number of tabs : %d\n", nt);
    printf("Number of space: %d\n", nb);
    return 0;
}