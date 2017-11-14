#include <stdio.h>

int main(){
    
    char * name = "John";
    //does three things:
        //It allocates a local (stack) variable called name, which is a pointer to a single character.
        //It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course).
        //It initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory).
    
    /* define a local variable a */
    int a = 1;

    /* define a pointer variable, and point it to a using the & operator */
    int * pointer_to_a = &a;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);
    
    return 0;
}