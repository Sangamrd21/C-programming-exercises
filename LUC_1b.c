/* The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters.*/

#include <stdio.h>

int main(){
    float dist_km, dist_m, dist_ft, dist_cm, dist_inch;

    printf("Enter the distance between two cities: ");
    scanf("%f", &dist_km);

    dist_m = dist_km * 1000.0;
    dist_cm = dist_m * 100.0;
    dist_ft = dist_m * 3.28084;
    dist_inch = dist_ft * 12.0;

    printf("Distance in meters: %.2f m\n",dist_m);
    printf("Distance in centimeters: %.2f cm\n",dist_cm);
    printf("Distance in feet: %.2f ft\n",dist_ft);
    printf("Distance in inches: %.2f in\n",dist_inch);
    return 0;
}