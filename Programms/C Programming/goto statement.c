#include <stdio.h>
int main()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number  0 to exit");
            scanf("%d", &num);
            goto end;
        }
    }
    end:
    return 0;
}
