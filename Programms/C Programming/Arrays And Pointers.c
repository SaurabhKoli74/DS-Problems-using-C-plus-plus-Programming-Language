#include <stdio.h>

/* Arrays and Pointers */

int main()
{
    int i, a[5], *p;
    p = &a[0]; // We can also write &a or a
    p[2]=45;
    printf("%d\t\n",p[2]);
    printf("%d\t\n",*(p+2));
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &p[i]); // This will take  input in Array
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", *(p + i));
    }

    return 0;

}