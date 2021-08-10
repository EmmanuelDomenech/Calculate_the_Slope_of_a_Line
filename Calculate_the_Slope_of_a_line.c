// C code
// This program will calculate the slope of a line. If the value of y is greater than 10, will inform the user.
// Emmanuel Domenech

#include <stdio.h>

int main ()
{
    /* variable definition: */
    float y, m, x, b;

    /* Prompt user to input m */
    printf("Enter the value for m\n");
    scanf("%f", &m);
    /* Prompt user to input x */
    printf("Enter the value for x\n");
    scanf("%f", &x);
    /* Prompt user to input b */
    printf("Enter the value for b\n");
    scanf("%f", &b);

    /* value of y */
    y=(m*x)+b;

    printf("The value of y is: %f\n",y );
    if (y > 10)
    printf("The value of y is over 10\n");
    return 0;
}
