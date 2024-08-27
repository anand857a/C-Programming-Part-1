#include <stdio.h>

int main()
{   // Here, the user enter his/her age to see whether they meet the conditions mentioned below.
    int age;
    printf("Please enter your age = ");
    scanf("%d",&age);

    // This is the part where the program sees through if the conditions mentioned here, are being met or not.
    if(age >= 18)
    {
    printf("Congratulations, you can vote!");
    }
    // This is the part where the program puts up the message highlighting the non-compliance 
    // of the conditions that had been mentioned earlier.
    else
    {
    printf("Sorry, you cannot vote yet!");
    }

    // The End
    return 0;
}