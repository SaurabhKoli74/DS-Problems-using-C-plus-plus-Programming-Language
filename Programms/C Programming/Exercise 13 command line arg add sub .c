#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atoi is imp here it converts the string into int

int main(int argc, char *argv[])
{
    char *operation;
    operation = argv[1];
    int num1, num2;
    num1 = atoi(argv[2]); // atoi is used to convert the string to int
    num2 = atoi(argv[3]);
    printf("The operation is %s\n", operation);

    printf("The value of num1 is %d\n", num1);
    printf("The value of num2 is %d\n", num2);
    if (strcmp(operation, "add") == 0) // 0 means equal
    {

        printf("%d + %d = %d", num1, num2, num1 + num2);
    }
    if (strcmp(operation, "Divide") == 0)
    {

        printf("%d / %d = %d", num1, num2, num1 / num2);
    }
    if (strcmp(operation, "subtract") == 0)
    {

        printf("%d - %d = %d", num1, num2, num1 - num2);
    }
    return 0;
}
