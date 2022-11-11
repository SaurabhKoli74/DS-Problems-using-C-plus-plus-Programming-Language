#include<iostream>
#include<string>
using namespace std;


class Bill_Generator
{
    public:
    Bill_Generator(){};
    int data;
};
int main()
{
    string s1= "Sk";
    cout<<s1[0]<<endl;
    Bill_Generator s2;
    cout<<s2.data;
    return 0;
}