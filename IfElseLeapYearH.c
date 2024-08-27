#include <stdio.h>

int main()
{
    // This is the part where we declare a variable to hold the year.
    int year;
    
    // This is the part where we ask the user to input a year. 
    printf("Please enter a year : ");
    scanf ("%d", &year);
    
    // This is the part where we introduce a control condition to check whether the input year is a leap year.
    if (( year%4 == 0 && year%100 != 0) || year%400 == 0)
    {
    printf("%d is a leap year.", year);
    }
    
    // This is the part where we see that the input year is not a leap year.
    else
    {
    printf("%d is not a leap year.", year);
    }

    // The End
    return 0;
}