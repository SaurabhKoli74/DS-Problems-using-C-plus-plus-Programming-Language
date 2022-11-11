#include <stdio.h>

/* 
  *Predefined Macros ,....   It needs Double Underscore to be print ....*  StRING Format SPecifier !!!
1. __TIME__
2. __LINE__
3.__FILE__
4.__STDC__      To know wether we are    compiling  in ANSI Standard
5.__DATE__
*/
int main()
{
  printf("The time is %s\n ", __TIME__); // (Double Underscore) predefined Macro
  printf("The Date is %s\n", __DATE__);
  printf("The File name is %s\n", __FILE__);
  printf("The LINE name is %d\n", __LINE__);
  printf("ANSI Standard : %d", __STDC__); // To know wether we are compiling in ANSI Standard

  return 0;
}