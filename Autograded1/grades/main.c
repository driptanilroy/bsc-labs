#include "grades.c"

int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    if(grades(marks) == 'X'){
        printf("Invalid marks entered. Please enter a number between 0-100.");
    } else{
        printf("Grade: %c", grades(marks));
    }

    return 0;
}