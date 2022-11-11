#include<stdio.h>

void displayArray(int a[],int n)
{

    for (int i = 0; i <n; i++)
    {
        printf(" %d",a[i]);
    }    
    a[0] = 99;
}

int main()
{
    int n;
    int a[10];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    for (int i = 0; i <n; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\n");
   
    displayArray(a,n); 
      printf("\n\n");
    for (int i = 0; i <n; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
      
}