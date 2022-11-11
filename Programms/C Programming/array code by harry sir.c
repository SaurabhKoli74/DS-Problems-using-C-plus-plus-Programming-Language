#include <stdio.h>
int main()
{
    //one Dimension Array
    int marks[10], sum = 0;
    printf("Enter Marks Of 10 Students : \n\n");
    for (int i = 0; i <= 9; i++)

    {

        printf("Marks Of %d Student : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    int average = sum / 10;
    printf("\nThe Average Marks Of 10 Students are %d", average);

    return 0;
}
