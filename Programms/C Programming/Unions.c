// Unios are as same as Structures the diff is that we can save memory by using unions it uses shared memory but struct uses every memory of datatypes....
#include <stdio.h>
#include <string.h>
union student {
    int num;
    char name[35];
};
int main()
{
    union student a;
    strcpy(a.name, "Saurabh");
    a.num = 20;
    printf("The name of student a is %s\n", a.name);
    printf("The number of student a is %d\n", a.num);

    return 0;
}