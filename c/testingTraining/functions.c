#include <stdio.h>

//C loads in order, so to use the function "foo" which is declared after main, a declaration of foo needs to be made before main
int foo(int bar);

//the void keyword means that nothing has to be returned
void moo(){
    printf("I'm a moo'er\n");
}

int main(){
    
    foo(1);
    moo();
    
    return 0;
}

int foo(int bar){
    return bar * 2;
}