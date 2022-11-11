#include <stdio.h> // preprocessor
// #include "array.c"     // preprocessor 2nd represantation or use of #include
#define PI 3.14 // define directive (preprocessor) used to define preprocessor var
//#define SK 2
#define DEBUG 2       // we can debug by #define
#define SQUARE(X) X *X // here SQUARE is macro its acts as a function and it is faster coz it is preprocessed before compilation process

/* 
Preprocessors list as given below ....
#define
#include
#undef .. undifined a macro
#ifdef ... if defined it will return true 1
#ifndef ... if not defined it will return 1 true
#if
#else
#elif
#pragma --- To issue some special commands to the compiler
*/

int main()
{
    // #ifdef PI //if defined the value of PI
    // printf("The value of PI is %4.2f\n", PI);
    // #endif // End of ifdef preprocessor

#ifndef SK
    printf("The value is not defined\n");
#endif
#if DEBUG // here float values are not considered else it will show error  /// here t acts as a if define ifdef
    printf("The value of PI is %4.2f\n", PI);

#endif
    int r = 3;

    printf("The Area of circle is %4.2f\n", PI * SQUARE(r));

    return 0;
}
//NOTE *** * --IN #if the float values are not allowed compare soo we not use this in program as usually