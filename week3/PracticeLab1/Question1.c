/*
PracticeLab1_Question1

a) Write a C program that takes three integers as input from the user. Print True when all the three integers are equal,
and False otherwise. Do not use switch statements or loops in your program.

b) Now, modify the above program to print True when none of the three integers entered by the user is equal to another,
and False otherwise.
*/

//CODE
#include <stdio.h>
int main()
{
   int a, b, c;
   printf("Enter three integers a, b, and c - \n");
   scanf(" %d %d %d", &a, &b, &c);

   // Part A
   if ((a==b)&&(a==c)){
      printf("True\n");
   }
   else{
      printf("False\n");
   }
  
   // Part B
   if ((a == b) && (a == c))
   {
      printf("False\n");
   }
   else
   {
      printf("True\n");
   }

   return 0;
}
