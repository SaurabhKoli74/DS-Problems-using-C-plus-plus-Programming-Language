//09 february 2021
#include <stdio.h>

int main()
{
    FILE *p;
    //printf("%d\n",EOF);
    p = fopen("open.txt", "w");
    // fprintf(p, "I am a good boy!");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(p, "%d x %d = %d\n", i, 5, i * 5);
    }
    fclose(p);
    p = fopen("open.txt", "r");
    char c;
    while (fscanf(p, "%c", &c) != EOF) // fscanf returns EOF 
    {    
        printf("%c", c);
    }
    fclose(p);
    return 0;
}