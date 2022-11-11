#include <stdio.h>
#include <string.h>
struct Agency
{
    char Name[30];
    char Driving_Licence[36];
    char route[30];
    char Kms[35];
};
int main()
{
    struct Agency a, b, c;
    printf("Welcome You All \n");
    printf("First Member will Enter there information\n");
    printf("1.Enter Your Name :\n");
    gets(a.Name);
    printf("\n2.Enter Your driving licence number :\n");
    gets(a.Driving_Licence);
    printf("\n3.Enter Your Route:\n ");
    gets(a.route);
    printf("\n4.How many Kms Have You travelled till Now ?\n");
    gets(a.Kms);
    printf("First Member Information is given below\n");
    printf("Your Name is %s\n", a.Name);
    printf("Your Driving Licence Number  is %s\n", a.Driving_Licence);
    printf("Your Route is %s\n", a.route);
    printf("You Have Travelled %s Kms .\n\n", a.Kms);
    printf("Thank You %s\n", a.Name);
    printf("You will be informed soon ......\n");
    printf("Second Member will Enter there information\n");
    printf("1.Enter Your Name :\n");
    gets(b.Name);
    printf("\n2.Enter Your driving licence number :\n");
    gets(b.Driving_Licence);
    printf("\n3.Enter Your Route:\n ");
    gets(b.route);
    printf("\n4.How many Kms Have You travelled till Now ?\n");
    gets(b.Kms);
    printf("Second Member Information is given below\n");
    printf("Your Name is %s\n", b.Name);
    printf("Your Driving Licence Number  is %s\n", b.Driving_Licence);
    printf("Your Route is %s\n", b.route);
    printf("You Have Travelled %s Kms .\n\n", b.Kms);
    printf("Thank You %s\n", b.Name);
    printf("You will be informed soon ......\n");
    printf("Third Member will Enter there information\n");
    printf("1.Enter Your Name :\n");
    gets(c.Name);
    printf("\n2.Enter Your driving licence number :\n");
    gets(c.Driving_Licence);
    printf("\n3.Enter Your Route:\n ");
    gets(c.route);
    printf("\n4.How many Kms Have You travelled till Now ?\n");
    gets(c.Kms);
    printf("Third Member Information is given below\n");
    printf("Your Name is %s\n", c.Name);
    printf("Your Driving Licence Number  is %s\n", c.Driving_Licence);
    printf("Your Route is %s\n", c.route);
    printf("You Have Travelled %s Kms .\n\n", c.Kms);
    printf("Thank You %s\n", c.Name);
    printf("You will be informed soon ......\n");

    return 0;
}
