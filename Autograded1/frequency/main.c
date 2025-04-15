#include "frequency.c"

int main()
{
    int num;
    int digit;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Enter digit to be checked\n");
    scanf("%d", &digit);
    printf("The frequency of the digit %d in %d is: %d\n", digit, num, frequency(num, digit));

}