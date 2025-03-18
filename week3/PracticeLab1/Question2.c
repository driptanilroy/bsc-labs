/* PracticeLab1_Question2

Write a C program that accepts as inputs the marks obtained by a student in a particular exam and then prints the
description of marks obtained based on the following rules.

>=90 - Extraordinary
>=80 - Very Good
>=65 - Good
>=50 - Average
>=40 - Below Average
else - Fail

It is important to note that the program written in the file has some compile time and runtime errors. You need to
resolve them so that the program works correctly. You can use the below test cases for your reference.

Testcase1	   Testcase2	   Testcase3
Input - 65     Input - 15      Input - 49
Output - Good  Output - Fail   Output - Below Average
*/

//CODE
#include <stdio.h>
int main()
{

    int marks;
    printf("Please enter your marks: ");
    scanf(" %d", &marks);

    if (marks >= 90){
        printf("Your grade is Extraordinary\n");
    }
    else if (marks >= 80){
        printf("Your grade is Very Good.\n");
    }
    else if (marks >= 65){
        printf("Your grade is Good.\n");
    }
    else if (marks >= 50){
        printf("Your grade is Average.\n");
    }
    else if (marks >= 40){
        printf("Your grade is Below Average.\n");
    }
    else{
        printf("Fail, but it is not the end of the world.\n");
    }

    return 0;
}
