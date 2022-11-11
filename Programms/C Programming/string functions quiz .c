#include <stdio.h>
#include <string.h>
int main()
{
    //variable declaratin
    char s1[30];
    char s2[30];
    char s3[] = " is a friend of ";

    //input from user first string
    printf("Please enter your first string:\n");
    gets(s1);
    //input from user second string
    printf("Please enter your second string:\n");
    gets(s2);
    //print to user
    //printf("%s is a freind of %s\n", s1, s2);
    //now combine using starcat() function
    printf("\nNow combine all strings using strcat() function\n");
    printf(strcat(s1, strcat(s3, s2)));

    return 0;
}