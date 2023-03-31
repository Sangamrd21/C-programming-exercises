/* Ramesh's basic salary is input through the keyboard. 
His dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. 
Write a program to calculate his gross salary.*/

#include <stdio.h>

#define DEARNESS_ALLOWANCE 0.2
#define HOUSERENT_ALLOWANCE 0.4

int main(){
    float basic_salary;
    float gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    gross_salary = basic_salary + (basic_salary*DEARNESS_ALLOWANCE) + (basic_salary*HOUSERENT_ALLOWANCE);
    printf("Gross salary %.2f\n", gross_salary);
    return 0;
}