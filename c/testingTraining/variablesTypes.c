#include <stdio.h>

//data types include:
//Integers - whole numbers which can be both positive and negative. Defined using char, int, short, long or long long.
//Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
//Floating point numbers - real numbers (numbers with fractions). Defined using float and double.
//Structures - will be explained later, in the Structures section.

//C does not have BOOL's, however the Bool type can be emulated, shown below

    /*#define BOOL char
    #define FALSE 0
    #define TRUE 1*/
int main(){


    int foo;
    int bar = 1;

    int a = 0,b = 1,c = 2,d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a);
    return 0;
}



