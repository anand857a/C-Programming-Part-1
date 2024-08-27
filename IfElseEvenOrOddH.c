#include <stdio.h>

int main()
{
    // This is the part where we put in the variable to store the user's input.
    int num;

    // This is the part where the user gives in their input.
    printf("Please enter an integer: ");
    scanf("%d", &num);

    // Here, we verify if the number is an even or an odd number.
    // This is the part for the even number.
    if (num % 2 == 0)
    {
    printf("%d is an even number.",num);
    }

    // This is the part for the odd number.
    else
    { 
    printf("%d is an odd number.",num);
    }
    
    // The End
    return 0;
}