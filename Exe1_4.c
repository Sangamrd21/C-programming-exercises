#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //lower limit of temperature scale
    upper = 100; //upper limit
    step = 10; //step size

    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    printf("-----------------------\n");
    while (celsius <= upper){
        //fahr = ((celsius)*(9.0/5.0))+32.0;
        fahr = (9.0 / 5.0) * celsius + 32.0f;
        printf("%6.1f\t\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }   
}