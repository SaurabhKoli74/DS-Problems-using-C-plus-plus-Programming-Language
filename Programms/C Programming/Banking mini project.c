#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Acc
{
    long int acn;
    char name[25];
    char atype[25];
    int bal;
    struct Acc *nextacc;
};
struct Acc *root,*newrg,*temp;

void BankReg()
{
    newrg = (struct Acc*)malloc(sizeof(struct Acc));
    printf("Enter Account Number : ");
    scanf("%ld",&newrg->acn);
    printf("Enter Name : ");
    getchar();
    gets(newrg->name);

    printf("Enter Account Type (Saving/Current) : ");
    scanf(" %s",&newrg->atype);
    newrg->nextacc = NULL;
    newrg->bal = 500;
    do
    {
            if(newrg->bal<500)
            printf("Please Enter Amount Above 500\n");
            printf("Enter Amount : ");
            scanf("%d",&newrg->bal);
    }while(newrg->bal<500);

    if(root==NULL)
    {
        root=temp=newrg;
    }
    else
    {
        temp ->nextacc =newrg;
        temp = newrg;
    }
    printf("\n\t\t****Congratulations Your Account has been Created Successfully****\n\n");

}
void show()
{
    struct Acc *tmp;
    tmp = root;
    if(root  == NULL)
    {
        printf("No Accounts Registered to our Services , Please Register First!\n");
    }
    else
    {
        printf("\n\t\tAccount Details\n\n");
        while(tmp != NULL)
        {
            printf("\tAccount No. : %ld\n",tmp->acn);
            printf("\tName        : %s\n",tmp->name);
            printf("\tAccount Type: %s\n",tmp->atype);
            printf("\tBalance     : %d\n\n",tmp->bal);
            tmp = tmp->nextacc;
        }

    }
    
}
void SearchAcc()
{
    if(root==NULL)
    {
        printf("\n\n\t\tNo Accounts Registered , Please Register First!\n");
        return;
    }
    long int acnum;
    struct Acc *tmp;
    r:
    tmp = root;
    printf("\nPlease Enter Your Account Number : ");
    scanf("%ld",&acnum);
    int flag = 0;
    
    
    
    while(tmp != NULL)
    {

        if(tmp->acn == acnum)
        {
            printf("\nMatch Found ! ...Processing .. \n\n");
            printf("\n\t\tWELCOME TO JANATA BANK \n\n");
            flag = 1;
            break;
        }
        tmp = tmp->nextacc;
    }
        if(flag == 0)
        {
            printf("Your Account Number is Invalid !!! , Please Enter valid Account Number \n");
            goto r;
        }

            printf("\tAccount No. : %ld\n",tmp->acn);
            printf("\tName        : %s\n",tmp->name);
            printf("\tAccount Type: %s\n",tmp->atype);
            printf("\tBalance     : %d\n\n",tmp->bal);

    


}
int main()
{
    int choice,num;
    printf("\n\t\tWELCOME\n");
    printf("1.New Registration\n2.Withdrawal\n3.Deposit\n4.Display Account Details\n5.Search Account Details\n6.Exit\nSelect Your Choice : ");
    scanf("%d",&choice);
    printf("\n\n");

    while(choice != 6)
    {
        switch(choice)
        {
            case 1:
            printf("\n\t\tNEW REGISTRATION\n\n");
            BankReg();
            break;
            case 4:
            show();
            break;
            case 5:
            SearchAcc();
            break;
            default:
            printf("You have Entered Wrong Choice : ");
            break;
        }
        printf("Press ""1"" For Main Menu / Press ""0""  to exit\n");
        scanf("%d",&num);
        if(num == 0)
        {
            return 0;
        }
        printf("\n1.New Registration\n2.Withdrawal\n3.Deposit\n4.Display Account Details\n5.Search Account Details\n6.Exit\nSelect Your Choice : ");
        scanf("%d",&choice);
    }
    return 0;
}