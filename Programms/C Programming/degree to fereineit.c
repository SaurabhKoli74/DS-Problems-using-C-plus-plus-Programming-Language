#include <stdio.h>
int main(int argc, char const *argv[])
{
    float degree, fereneit;
    printf("Enter the number you want to convert in fereineit\n");
    scanf("%f", &degree);
    fereneit = (degree * 9 / 5) + 32;
    printf("The %f degree in fereneit is %f fereneit", degree, fereneit);
    return 0;
}
