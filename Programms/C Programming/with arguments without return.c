#include <stdio.h>

void printstar(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main(int argc, char const *argv[])
{
    int a;
    //printf("Enter the number");
    //scanf("%d",&a);
    printstar(7);
    return 0;
}
