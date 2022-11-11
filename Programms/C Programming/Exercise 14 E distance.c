#include <stdio.h>
#define PI 3.14
#include <math.h>
float Edistance(int x1, int y1, int x2, int y2)
{
    float a;
    a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);

    return sqrt(a);
}
float areaofcircle(int x1, int y1, int x2, int y2, float (*dist)(int x1, int y1, int x2, int y2))

{
    float a;

    a = dist(x1, y1, x2, y2);
    printf("The Edistance is %.2f\n", a);
    a = a * a;
    printf("Area of circle of given distance(radius) is %.2f\n", PI * a);
}
int main()
{
    float x1, y1, x2, y2;
    printf("Enter the value of x1\n");
    scanf("%f", &x1);
    printf("Enter the value of x2\n");
    scanf("%f", &x2);
    printf("Enter the value of y1\n");
    scanf("%f", &y1);
    printf("Enter the value of y2\n");
    scanf("%f", &y2);
    areaofcircle(x1, y1, x2, y2, Edistance);
    return 0;
}