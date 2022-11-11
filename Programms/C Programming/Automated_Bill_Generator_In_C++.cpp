#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;


string replaceWord(char* str,char* oldword,char* newword)
{
    string resultString;
    int i,count =0;

    int newWordLength = newword.size();
    int oldWordLength = oldword.size();
    
    for ( i = 0; i < '\0'; i++)
    {
        if (strstr(&str[i],oldword)== &str[i])
        {
            /* code */
        }
        
    }
    
}
int main()
{
    str;
    ifstream in("bill.txt");
    getline(in, str);
    cout<<"The Given Bill Template was : %s\n",str);

    char* newstr;
    newstr = replaceWord(str, "{{item}}", "Table Fan");
    newstr = replaceWord(newstr, "{{outlet}}", "Ram Laxmi Fan Outlet");
    newstr = replaceWord(newstr, "{{name}}", "Harry");
    cout << "The actual bill generated is: " << newstr << endl;
    cout << "The generated bill has been written to the file genBill.txt" << endl;

    ofstream out("genBill.txt");
    out << newstr;

    return 0;
}