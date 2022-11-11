#include <stdio.h>

/* Strings are the only representation of character array in which  we have to declare string with null character \0 otherwise it will  print garbage value */
void prtstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[25]= {'s', 'k','\0'};
    printf("%s\n",str);

    gets(str);
    printf("Using custom function :\n");
    prtstr(str);
    printf("using puts printf:\n");
    puts(str);
    printf("Using printf str is\n%s", str);

    return 0;
}
