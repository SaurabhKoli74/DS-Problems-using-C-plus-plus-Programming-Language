// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     char s[] = "Hello ";

//     char s2[100];

//     // Read inputs from stdin

//     scanf("%*[\n] %[^\n]", s2);
//     // gets(s2);

//     // Print outputs to stdout

//     printf("%s%s", s, s2);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
void swap(int *arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main()
{
    int num;
    int *arr = NULL;
    int i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    for (i = 0; i < num / 2; i++)
    {
        swap(arr, i, ((num - 1) - i));
    }
    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    free(arr);
    return 0;
}