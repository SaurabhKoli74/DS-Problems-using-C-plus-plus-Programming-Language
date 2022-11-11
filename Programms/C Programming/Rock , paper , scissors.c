//Follow me on insta - @code_snail
//rock, paper & scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }

    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("tWelcome to the Rock Paper Scissorsn");
    printf("t----------------------------------nn");

    for (int i = 0; i < 3; i++)
    {
        // Take player input
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissorsnn");
        printf("tPlayer's turn: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf(" -----------------n");
        printf("| You choose: %c   |n", playerChar);
        printf(" -----------------nn");

        //computer generate
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissorsnn");
        printf("tComputer's turnn");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf(" --------------------n");
        printf("| Computer choose: %c |n", compChar);
        printf(" --------------------nn");

        // compater character and increment the score
        if (greater(compChar, playerChar) == 1)
        {
            compScore++;
            printf("ttComputer Got It!nn");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore++;
            playerScore++;
            printf("ttIt's a draw. Both got 1 point!nn");
        }
        else
        {
            playerScore++;
            printf("ttYou Got It!nn");
        }

        printf(" -------------n");
        printf("| You: %d      |n", playerScore);
        printf("| Computer: %d |n", compScore);
        printf(" -------------nn");

        printf("===========================================================nn");
    }

    printf(" -----------------n");
    printf("|   Final Score   |n");
    printf(" -----------------n");
    printf("|  You | Computer |n");
    printf("|------|----------|n");
    printf("|   %d  |    %d     |n", playerScore, compScore);
    printf(" -----------------nn");

    // compare score
    if (playerScore > compScore)
    {
        printf("nt -------------------n");
        printf("t| You Win the match |n");
        printf("t -------------------n");
    }
    else if (playerScore < compScore)
    {
        printf("nt ------------------------n");
        printf("t| Computer Win the match |n");
        printf("t ------------------------n");
    }
    else
    {
        printf("nt -------------n");
        printf("t| It's a draw |n");
        printf("t -------------n");
    }

    return 0;
}