#include <stdio.h>

int main()
{
    // This is the part where we declare the two numbers.
    float num1, num2;

    // This is the part where we request the user to input the first number.
    printf("Please enter the first number: ");
    scanf("%f", &num1);

    // This is the part where we request the user to input the second number.
    printf("Please enter the second number: ");
    scanf("%f", &num2);

    // This is the part where we compare the two numbers and print the greater one.
    // This is the part where we see if the first number is greater than the second number.
    if (num1 > num2)
    {
    printf("The greater number is: %.2f", num1);
    }
    
    // This is the part where we see if the second number is greater than the first number.
    else if (num2 > num1)
    {
    printf("The greater number is: %.2f", num2);
    }

    // This is the part where we see if both the numbers are equal.
    else
    {
    printf("Both of these numbers are equal to the one another.");
    }

    // The End
    return 0;
}