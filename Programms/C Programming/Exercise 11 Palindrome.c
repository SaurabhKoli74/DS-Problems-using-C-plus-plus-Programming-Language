//Pelandrome is nothing but it is function of when we reverce the string or no if it is equal to original then it is pelandrome
// this we have to prove

#include <stdio.h>
#include <string.h>
int Ispalindrome(int n)
{
    int temp, reversed; // here temp is taken coz to retain the n original value in if statement
    // reversed is taken to store the reverce value
    temp = n;
    // Reverse the number
    while (n != 0)
    {
        reversed = (reversed * 10) + (n % 10); // here not used assignment operator coz we have to put next no front of previous
                                               // .... so we multiply by 10 .!

        n = n / 10; // we get new number by excluding one end number
    }
    // now the n value is become zero
    if (temp == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i;
    printf("Enter the no to know is it Pelandrome ?\n");
    scanf("%d", &i);
    if (Ispalindrome(i)) // 1 means true in if else statement so no problem if we not take as ==1 it default takes 1 as true
    {
        printf("The Given no. is Palindrome\n");
    }
    else
    {
        printf("The Given no. is not Palindrome\n");
    }
    return 0;
}