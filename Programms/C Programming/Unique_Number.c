#include <stdio.h>
#define MAX_SIZE 50
int main()
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int size, i, j, count;
    int summation = 0;
    int count_of_unique_numbers = 0;
    printf("Enter size of array:\n");
    scanf("%d", &size);
    printf("Enter elements in array :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
                }
    }
    for (int i = 0; i < size; i++)
    {
        if (freq[i] == 1)
        {
            count_of_unique_numbers++;
            summation += arr[i];
        }
    }
    printf("%d\t", count_of_unique_numbers);
    printf("%d\t", summation);
}