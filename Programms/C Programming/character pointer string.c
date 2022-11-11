#include <stdio.h>
#include <string.h>
int main()
{
    char *ptr = "***I AM SK***";
    // char *ptr1 = {'A', 'B', 'C'}; // we will not able to write a string like this  coz its not a array
    // char a = 'q'; // character pointer acts as a character array that is string
    // here we stored the string as character pointer not character array note it
    printf("The pointer string  is  %s\n", ptr); // here we are dereferencing
    // printf("The address of a is %d\n", &a);
    // printf("The pointer string is %s",ptr1);
    return 0;
}

// note here we can observe that character array as well as character pointer acts as a string
