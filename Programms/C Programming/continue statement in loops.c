#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=0,age;
    while(i<56)
    {
          printf("%d\nEnter Your Age\n",i);
          scanf("%d",&age);
          i=i+1;
        if(age<10)
        {

            continue;
        }
        printf("statement is not continue it will go to the next iteration");
    
         
    
    }
    
    
    
    return 0;


}
