#include <stdio.h>
#include <string.h>
// parser is only the word that is given its meaning is removing the unwanted characters from the string  ie known as parsing ... parse is 
/////not keyword it is only the name given we can change it

void parser(char *string)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    // note below
    while (string[strlen(string) - 1] == ' ') // here we cant take string[strlen(string-1)]  its meaning is different
    {
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char string[] = "<H1>    This is Heading   </h1>";
    parser(string);
    printf("The parsed string is +++%s+++", string);
    return 0;
}