
// Typedef is nothing but we can change the name of data type ..... in structures also
// typedef <previous_name> <alias_name>; 
#include<stdio.h>
typedef struct student 
{

  int number;
  char chara;
}std;    // note .. alias name is given here not above

 int main()
{
    std  c = {20,'p'};
    struct student d = {25,'i'};
    printf("the number of c is %d\n",c.number);
    
    typedef int integer;
    int a=3;
    integer b = 3;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;

}


/* NOte ... int *a,b;
here it will consider a as pointer not b 
*/

