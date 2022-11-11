/* round in C Programming Example */

#include <stdio.h>
#include <math.h>

int main()
{
    printf("\n The Round Value of 0.75    = %.2f ", round(0.75));
    printf("\n The Round Value of 15.25   = %.2f ", round(15.25));
    printf("\n The Round Value of 152.50  = %.2f ", round(152.50));
    
    printf("\n The Round Value of -14.36  = %.2f ", round(-14.36));
    printf("\n The Round Value of -26.82  = %.2f ", round(-26.32));
    printf("\n The Round Value of -90.50  = %.2f \n", round(-90.50));
    
    return 0;
}