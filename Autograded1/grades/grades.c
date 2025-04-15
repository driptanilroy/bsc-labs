#include <stdio.h>

char grades(int marks)
{
    char grade;
    //Write your code here
    if(marks<0||marks>100){
        printf("Invalid marks entered. Please enter a value between 0 and 100.");
    }
    else{
        if(marks >= 90){
            grade = 'A';
        }
        else if(marks >= 80){
            grade = 'B';
        }
        else if(marks >= 70){
            grade = 'C';
        }
        else if(marks >= 60){
            grade = 'D';
        }
        else if(marks >= 50){
            grade = 'E';
        }
        else{
            grade = 'F';
        }
    }
    //
    return grade;
}