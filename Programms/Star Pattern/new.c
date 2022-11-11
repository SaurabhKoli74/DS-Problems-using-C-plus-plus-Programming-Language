#include<stdio.h>
#include<string.h>

int main()
{
    char a[5][20],temp[20];
    int i,j,loc=0,k;
    for(i=0; i<5 ; i++)
    {
        scanf("%s",&a[i]);
    }
    
    for(i=0;i<5-1;i++)
    {
        loc = 0;
        for(j=0 ; j<5-i ; j++)
        {
            for( k =0 ; k<1 ; k++)
            {
                if(a[j][k] < a[j+1][k])
                {
                    loc = 1;
                    strcpy(temp,a[j]);
                    strcpy(a[j],a[j+1]);
                    strcpy(a[j+1],temp);
                    break;
                }
            }
        }
        if(loc==0)
        {
            printf("Already sorted Some Elements So Break Statement Executes :\n");
            break;
        }
    }
    for(i=0 ; i<5 ; i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;




}