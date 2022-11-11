// Command line arguments means giving arguments or getting arguments through command line
//  argc - count
// atgv - value
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter two numbers for sum through command line promt\n");
    printf("The value of argc is %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("The value at  index number %d is %s\n", i, argv[i]);
    }
    return 0;
}
