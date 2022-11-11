
/* string functions as follows ie 
1. strcat 
2.strlen ----- here character terminater is negleted
3.strrev
4.strcmp   --- note ----if 1st alphabet is nearer ie first then -ve and if 2nd is 1st then +ve will be printed and 0 for same strings.. in the alphabet order
.
5.strcpy
*/

#include <stdio.h>
#include <string.h>
int main()
{                      //initializing the character array ie strings
    char s1[20] = "b"; //the length is showing by including semi coolans
    char s2[20] = {'a'};
    char s3[20];
    printf("%d\n", strlen(s1));
    printf("size of array s1 is:%d\n", sizeof(s1)); // char size is 1 byte per character so 20 bytes
    // puts(strlen(s1)); // its not printing the length of s1
    printf("The s1 string is :\n");

    //printing the value of s1 below
    puts(s1);

    printf("The s2 string is:\n");
    //printing the value of s2 string below by function puts
    puts(s2);
    printf("%s\n",s2);
    // now using strcmp function of string
    printf("The strcmp for s1 and s2 returned %d\n", strcmp(s1, s2));

    //now using strcat function of string header file
    puts(strcat(s1, s2));
    printf("by using strcat function: %s\n", strcat(s1, s2)); //here preciously s1 is combined in s2 so it will print s2 two times
    //by using reverse string function
    puts(strrev(s1)); //here the s1 and s2 is combined in previous strcat so it printing both s1 and s2
    puts(strrev(s2)); // but here not printing because that was copied in s1
    printf("The length of string s1 is %d\n", strlen(s1));
    printf("The length of string s2 is %d\n", strlen(s2));
    //now by using strcpy function of string
    puts(strcpy(s3, strcat(s1, s2)));
    printf("\n");
    strrev(s3);
    puts(s3);

    return 0;
}
