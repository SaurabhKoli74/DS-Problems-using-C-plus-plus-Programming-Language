#include<stdio.h>
// Type casting means presenting one data type to other data type 
int main()
{
    int a;
    float b;
    char c;
    printf("Enter The value of a\n");
    scanf("%d",&a);
    printf("The value of A is %d\n",a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("The Value Of B is %d\n ",(int)b);     //type casting
    printf("Enter a chara : \n ");
    scanf("%c",&c);
    printf("The value Of C is %d",(int)c); // type casting

        
    return 0;
}
