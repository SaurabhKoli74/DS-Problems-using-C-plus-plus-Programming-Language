// program for printing tringular star patter or reverse tringular star pattern
#include <stdio.h>

int main()
{
    char input;
    int num;

    printf("\nWhich Pattern You Want to Print From Following Options\n\n1.Triangular Star(*) Pattern\n\n2.Reverse Tringular Star(*) Pattern\n\n3.Stars in one Line\n\nType 'q' to quit from  the Program\n\n\n");
    scanf("  %c", &input);

    switch (input)
    {
    case 'q':
        printf("Quiting The Program\n");
        goto end;
        break;
    case '1':

        printf("You have Selected Tringular Star Pattern . \n\n");
        printf("How many lines of stars you want to print in Tringular Pattern ?\n\n");
        scanf("%d", &num);
        printf("\n");
        for (int i = 0; i < num; i++)
        {

            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case '2':

        printf("You have Selected Reverse Tringular Star Pattern\n");
        printf("How many lines of stars you want to print in Reverce Tringular Pattern\n");
        scanf("%d", &num);

        // for (int i = num; i > 0; i--)
        // {
        //     for (int j = 0; j < i; j++) // here we cam take j =1 but then we have to take j<=i
        //     {
        //         printf("*");
        //     }
        //     printf("\n");

        //  OR We can do
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num - i; j++) // Or for ( int j = 0; i <= num-i-1 ; j++)
                printf("*");
            printf("\n");
        }

        break;

    case '3':
        printf("You have selected stars in one line\n");
        printf("How many stars you want to print in line ?\n");
        scanf("%d", &num);
        for (int i = 0; i < num; i++)
        {
            printf("*");
        }
        break;

    default:
        printf("Invalid key Entered");
        break;
    }

end:
    return 0;
}
