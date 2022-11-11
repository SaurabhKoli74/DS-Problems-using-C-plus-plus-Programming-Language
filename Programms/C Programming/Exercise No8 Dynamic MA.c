#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int i = 0;
    char a, b, c; // here it is taken to know scanf buffer point concept
    int chars;
    while (i < 3)
    {
        printf("Enter the no of characters for  Employee %d\n", i + 1);
        scanf("%d", &chars);
        getchar(); ///scanf buffer point otherwise it will skip a and goes to b it will not take a value/input
        printf("Enter the char value for a :\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the char value for  b :\n");
        scanf("%c", &b);
        printf("Enter the char value for c  :\n");
        scanf("%c", &c);

        ptr = (char *)malloc((chars + 1) * sizeof(char)); //malloc dynamic MA
        printf("Enter  the Employee %d eid :\n", i + 1);
        scanf("%s", ptr); /// NOTE .. here '& operator' not req coz there is pointer... address is there previously when dMA

        printf("The eid for employee %d is :\n%s\n", i + 1, ptr);

        free(ptr);
        i = i + 1;
    }
    //when pointer is there we dont req & operator to store the address of var

    return 0;
}