#include <stdio.h>

int main(){
    
    //strings in c are actually char arrays
    
    char * one = "John Smith";//initialises a read only string
    
    char two[] = "John Smith";//can be manipulated
    //the [] tells the compiler to allocate only the required space that the string needs
    //same as doing:
    char three[11] = "John Smith";
    
    char name[] = "John Smith";
    
    int age = 42;
    
    printf("%s is %d\n", name, age);
    
    //string length
    char example[] = "Simon";
    printf("The word %s is %d letters long\n",example, strlen(example));
    
    //string comparison
    char stringA[] = "John";
    if (strncmp(name, "John", 4) == 0) { //strncmp(variable, what it should be, for the first x letters)
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }
    
    //string concatination
    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);//destination string, source string, and n - maximum number of characters to be appended
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);
    
    return 0;
}