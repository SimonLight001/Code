#include <stdio.h>

typedef struct {
    char * name;
    int age;
} person;

int main(){
    person * myPerson = malloc(sizeof(person)); //allocates the needed memory
    
    myPerson->name = "John Smith";
    myPerson->age = 26;
    
    free(myPerson);//frees the memory after usage
    
    return 0;
}