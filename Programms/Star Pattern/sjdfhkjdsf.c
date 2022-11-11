#include<stdio.h>


int main()
{
  int n = 0,counter=0,pre=0,next=0,loc=1;
  while(1)
  {
    scanf("%d",&n);
    next=n;
    if(n==-1)
    {
      break;
    }
    else
    {
      if(loc)
      {
        pre=n;
        counter+=1;
        loc=0;
      }
      else if(next!=pre)
      {
        pre=next;
        counter+=1;
      }
   }
  }
  if(counter>=3)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
  return 0;
}
