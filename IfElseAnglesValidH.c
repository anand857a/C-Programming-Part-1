#include <stdio.h>

int main()
{
    // This is the part where we declare a variable for storing the three angles.
    float angle1, angle2, angle3;

    // This is the part where we ask the user to input the three angles.
    // This is the part where we ask the user to input the first angle.
    printf("Please enter the first angle: ");
    scanf("%f", &angle1);

    // This is the part where we ask the user to input the second angle.
    printf("Please enter the second angle: ");
    scanf("%f", &angle2);

    // This is the part where we ask the user to input the third angle.
    printf("Please enter the third angle: ");
    scanf("%f", &angle3);

    // This is the part where we see if the angles form a valid triangle.
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3) == 180)
    {
    printf("The angles form a valid triangle.");
    }
    
    // This is the part where we see that the angles do not form a valid triangle.
    else
    {
    printf("Unfortunately, the angles do not form a valid triangle.");
    }

    // The End
    return 0;
}