#include <stdio.h>
int main()
{
    int a;
    printf("choose the option from below that you have passed the subject/subjects\n1.Science\n2.maths\n3.both maths and science\n");
    scanf("%d", &a);
    if (a == 3)
    {
        printf("Congratulations You got 45 rs as your gift");
    }

        else if (a == 1 || a == 2)
        {
            printf("Congratulations You got 15 rs as your gift ");
        }
    
    else
    {

        printf("Errorrrrrrrrr");
    }

    return 0;
}
