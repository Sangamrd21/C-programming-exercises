#include <stdio.h>
float tempConverter(float fahr){
    return ((5.0/9.0) * (fahr - 32.0));
}
int main(){
    float fahr, celcius;
    printf("Enter the temperature(in Faherhiet): ");
    scanf("%f", &fahr);
    celcius = tempConverter(fahr);
    printf("Temperature in Celcius: %.2f", celcius);

    return 0;
}   