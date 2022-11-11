#include<stdio.h>
#include<math.h>
int main()
{
    int k;
    int n;
    int MaxAndgate=0;
    int MaxoRgate=0;
    int MaxXorgate=0;
    
    scanf("%d%d",&n,&k);
    
    if((n>=2) && (n<=pow(10,3)) && (k>=2) && (k<=n))
    {
        for(int i = 1 ; i<=n ; i++)
        {
            for(int j = i+1 ; j<= n ; j++)
            {

                if(((i & j) > MaxAndgate ) && ((i&j)<k))
                {
                    MaxAndgate = i&j;
                }
                if(((i | j)>MaxoRgate) && ((i|j)<k))
                {
                    MaxoRgate= i|j;
                }
                if(((i ^ j) > MaxXorgate) && ((i^j)<k))
                {
                    MaxXorgate= i^j;
                }

            }
        }

    }
    else
    {
    return 0;
    }
    printf("%d\n%d\n%d",MaxAndgate,MaxoRgate,MaxXorgate);
    return 0;
}
