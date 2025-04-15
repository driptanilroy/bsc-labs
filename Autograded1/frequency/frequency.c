#include <stdio.h>
#include "frequency.h"

int frequency(int num, int digit)
{
    int freq = 0;
    int newNumber = num;
    int digitToBeChecked;
    //Write your code here
    

    while(newNumber>0){
        digitToBeChecked = newNumber % 10;
        if(digitToBeChecked == digit)
        {
            freq++;
        }
        newNumber = newNumber/10;
    }
    //
    return freq;
}