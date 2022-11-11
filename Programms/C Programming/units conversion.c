#include <stdio.h>
int main()
{
    float milestokms = 1.60934;
    float inchestofoot = 0.0833333;
    float inchestometers = 0.0254;
    float cmstoinches = 0.393701;
    float poundtokg = 0.453592;
    char input;
    float first;
    int q;
    while (1)
    {
        printf("Enter the character you want from below\n1.miles to kms\n2.inches to foot\n3.cms to inches\n4.pounds to kgs\nEnter q to exit the program\n");
        scanf(" %c", &input);
        switch (input)
        {
        case '1':

            printf("Enter the quantity of first unit ie distance in miles\n\n");
            scanf("%f", &first);
            printf("The %f miles : %f kms\n\n", first, first * milestokms);

            break;
        case 'q':

            printf("The program will goo offf ");
            goto end;

        case '2':
            printf("Enter the quantity of first unit \n\n");
            scanf("%f", &first);
            printf("The conversion of %f inches is %f foot", first, first * inchestofoot);
            break;
        case '3':
            printf("Enter the quantity of first unit \n\n");
            scanf("%f", &first);
            printf("The conversion of %f cms is %f inches ", first, cmstoinches * first);
            break;
        case '4':
            printf("Enter the quantity of first unit \n\n");
            scanf("%f", &first);
            printf("The conversion of %f pounds is %f kgs", first, first * poundtokg);
            break;
        case '5':
            printf("Enter the quantity of first unit \n\n");
            scanf("%f", &first);
            printf("The converssion of %f inches is %f meters", first, first * inchestometers);
            break;

        default:
            printf("Invalid key Entered");

            break;
        }
    }
end:

    return 0;
}
