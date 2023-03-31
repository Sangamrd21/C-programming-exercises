/* If the marks obtained by a student in five different subjects are input through the keyboard, 
find out the aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student in each subject is 100. */

#include <stdio.h> 

int main(){
    float marks[10];
    float aggregate_marks, percentage_marks;

    printf("Enter the marks of five subjects: \n");
    for(int i = 0; i < 5; i++){
        scanf("%f", &marks[i]);
        aggregate_marks+=marks[i];
    }
    percentage_marks = aggregate_marks/5.0;

    printf("Aggregate Marks: %.2f\n", aggregate_marks);
    printf("Percentage: %.2f %", percentage_marks);

    return 0;
}