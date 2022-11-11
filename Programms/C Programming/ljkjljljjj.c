#include<stdio.h>
#include<math.h>

int main()
{
    int n=1001;

    // if (2<=n<=4)
    // {
    //     printf("Yes ..\n");
    // }
    if(n>=2 && n<=pow(10,3))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No ..\n");
    }

    printf("%d\n",2 & 3);  // Bitwise Operators
    return 0;
    
}