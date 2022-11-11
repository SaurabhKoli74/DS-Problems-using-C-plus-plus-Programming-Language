#include <stdio.h>
int main()
{
    int a, marks;
    printf("Enter Your Age\n");
    scanf("%d",&a);
    printf("Enter Your marks\n");
    scanf("%d", &marks);
    switch (a)
    {
    case 15:
        printf("Your Age is 15\n");
        switch (marks)
        {
        case 45:
            printf("You have entered 45 as your marks");
            break;
        
        default:
        printf("You are not entered 45 as your marks");
            break;
        }
        
    case 20:
        printf("Your Age is 20");
        break;
    case 30:
        printf("Your Age is 30");

        break;

    default:
        printf("Enter valid Number");
        break;
    }

    return 0;
}
