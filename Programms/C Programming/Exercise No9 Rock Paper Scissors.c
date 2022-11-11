#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int GenerateRandomnumber(int n)
{
    srand(time(NULL)); // To generate random number
    return rand() % n;
}
int Greater(char a, char b)
{
    // if a>b return 1 otherwise 0; if a=b then return -1;
    if (a == 'P' && b == 'R')
    {
        return 1;
    }
    else if (a == 'R' && b == 'P')
    {
        return 0;
    }
    else if (a == b)
    {
        return -1;
    }
    else if (a == 'R' && b == 'S')
    {
        return 1;
    }
    else if (a == 'S' && b == 'R')
    {
        return 0;
    }
    else if (a == 'S' && b == 'P')
    {
        return 1;
    }

    else if (a == 'P' && b == 'S')

    {

        return 0;
    }
    else
    {

        return 0;
    }
}
int main()
{
    int i, temp;
    int playerscore = 0;
    int computerscore = 0;
    i = 0;
    char compchar, playerchar;
    char dict[] = {'R', 'P', 'S'};
    printf("Welcome in Rock , Paper , Scissors\n");

    while (i < 3)
    {
        // Take Player's Input
        printf("Player's Turn\n");
        printf("Enter 1 for Rock , 2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("Player 1 Selected %c\n", playerchar);
        //Generating Computer's Input
        printf("Computer's Turn :\n");
        printf("Enter 1 for Rock , 2 for Paper and 3 for Scissors\n");
        temp = GenerateRandomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("The Computer Choosen %c\n", compchar);
        if ((Greater(compchar, playerchar) == 1)) //note it checks if return is 1 then only otherwise it goes next directly
        {
            computerscore += 1;
            printf("Computer Wins\n");
            printf("Computer : %d | You : %d\n", computerscore, playerscore);
        }

        else if ((Greater(compchar, playerchar)) == -1)
        {
            computerscore += 1;
            playerscore += 1;
            printf("Both are same\n");
            printf("Computer : %d\nYou : %d\n", computerscore, playerscore);
        }
        else
        {

            playerscore += 1;
            printf("Player wins\n");
            printf("Computer : %d\nYou : %d\n", computerscore, playerscore);
        }
        i = i + 1;
    }
    printf("\n\n");
    if (computerscore > playerscore)
    {
        printf("Computer Wins the Game By , **You : %d | computer : %d !!! !!!\n", playerscore, computerscore);
    }
    else if (playerscore > computerscore)
    {
        printf("Congratulations You Won  the game By , **You : %d | computer : %d !!!\n", playerscore, computerscore);
    }
    else if (playerscore == computerscore)
    {

        printf("Its a Tie !!!! **You : %d | computer : %d    !!!\n \n", playerscore, computerscore);
    }
    return 0;
}
