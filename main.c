#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int g,n,i;
    time_t t;
    srand((unsigned) time(&t));
    n = rand() % 21;
    printf("This is a guessing game.\n");
    printf("I have choosen a number between 0 and 20 which you must guess.\n");
    printf("\n");
    for(i=0;i<5;i++){
        printf("You have %d tr%s left.\n", 5-i, 5-i==1 ? "y" : "ies");
        printf("Enter a guess: ");
        scanf("%d",&g);
        if(g==n){
            printf("Congragulations. You guessed it!\n");
            return 0;
        }
        else if(g<0 || g>20)
            printf("Sorry invalid guess.\n");
        else
            printf("Sorry, %d is wrong. My number is %s than that.\n",g, g<n ? "greater" : "less");
    }
    printf("You have no tries left. The number is %d",n);

    return 0;
}
