#include<stdio.h>
int main(int argc, char const *argv[])
{
    float grams,kilograms;
    printf("Enter grams you want to convert in kg\n");
    scanf("%f",&grams);
    kilograms=grams/1000;
    printf("%f grams in kilograms = %f KG",grams,kilograms);

    return 0;
}
