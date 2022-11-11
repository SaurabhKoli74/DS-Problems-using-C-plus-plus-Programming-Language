#include <stdio.h>
#include <string.h>
//creating structure and writing we req data types is program

struct student

{
    int Roll_No;
    char Name[35];
    char Add[35];
    float perc_in_10th;
    int PRN_No;
    //struct student Saurabh, Shubham, Vinayak;  // Local Var means we can use it in this function only not in main
};
struct student Saurabh, Shubham, Vinayak; // Global Variable Declared means We can use this in any function in this prigram

// we can intialize all data type var in one ie struct student={20,"saurabh","basarge",77,1545456}; like this all students

int main()
{

    // getting variables Names
    //assigning the values to them one by one
    Saurabh.Roll_No = 20;
    Shubham.Roll_No = 25;
    Vinayak.Roll_No = 30;
    //Saurabh.Name='Saurabh Koli';    // Getting Error when initializing strings ???????
    //Shubham.Name="Shubham Jadhav";
    //Vinayak.Name="Vinayak Patil";
    //now initializing char array strings to var
    strcpy(Saurabh.Name, "Saurabh Koli");
    strcpy(Shubham.Name, "Shubham Jadhav");
    strcpy(Vinayak.Name, "Vinayak Patil");
    //printing
    printf("The Name of Student Saurabh is :\n");

    puts(Saurabh.Name);
    printf("The Name of Student Shubham is :\n");
    puts(Shubham.Name);
    printf("The Name Of student Vinayak is :\n%s\n", Vinayak.Name);
    Saurabh.PRN_No = 45123654;
    Shubham.PRN_No = 45789658;
    Vinayak.PRN_No = 45789678;
    // printf("What is PRN no. of Student Saurabh ? \n");
    // scanf("%d", &Saurabh.PRN_No);
    printf("The PRN no of Saurabh is :\n%d\n", Saurabh.PRN_No);
    printf("The PRN no of Shubham is :\n%d\n", Shubham.PRN_No);
    printf("The PRN no of Vinayak is :\n%d\n", Vinayak.PRN_No);

    strcpy(Saurabh.Add, "Basarge");
    strcpy(Shubham.Add, "Basarge");
    strcpy(Vinayak.Add, "Basarge");
    printf("The add of Saurabh is\n%s\n", Saurabh.Add);
    printf("The add of Shubham is \n%s\n", Shubham.Add);
    printf("The add of Vinayak is \n%s\n", Vinayak.Add);
    Saurabh.perc_in_10th = 77.4578;
    Shubham.perc_in_10th = 95.47844;
    Vinayak.perc_in_10th = 99.47888;
    printf("The perc of Saurabh in 10th is \n%4.2f\n", Saurabh.perc_in_10th);
    printf("The perc of Shubham in 10th is \n%4.2f\n", Shubham.perc_in_10th);
    printf("The perc of Vinayak in 10th is \n%4.2f\n", Vinayak.perc_in_10th);

    return 0;
}

//Coded By Harry Sir below about Structures
/* 

#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;
// struct Student harry, ravi, shubham;

void print()
{
    printf("%s", harry.name);
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';
    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(shubham.name, "Shubham Kumar");
    // printf("Harry got %d marks\n", harry.marks);
    // printf("Harry's name is: %s\n", harry.name);
    // printf("Shubham got %d marks\n", shubham.marks);
    // printf("Shubham's name is: %s\n", shubham.name);
    print();
    // Quick Quiz
    // print all the information of a given student

    return 0;
}
*/