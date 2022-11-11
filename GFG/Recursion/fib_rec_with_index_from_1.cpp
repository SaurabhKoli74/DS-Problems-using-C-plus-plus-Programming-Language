#include <iostream>
using namespace std;
// It is for user position fib
// We can do it Normal Fib by just subtracting 1 from input and then pass
int fib(int x) {
    if(x==0)
    {
      cout<<"invalid_number";
      return -1 ;
    }
    
   // if(x==2 ) 
   //    return 1;
   // if(x==1  )
   // {
   //    return 0;
   // }
   if(x==2 || x==1)
   {
      return x-1;
   }
   
      return(fib(x-1)+fib(x-2));
   
}
int main() {
   int x , i=4;
   //0 1 1 2 3 5
 
   cout << "\nFibonnaci Series " <<i<<"th Number Where index starts from 1 not from 0 ----> ";
  
      cout << " " << fib(i);
 
   return 0;
}