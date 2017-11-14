#include <stdio.h>

int main(){
    int i;
    for(i = 0; i < 10; i++){
        printf("%d\n", i);
    }
    
    
    int n = 0;
    while(n < 10){
        n++;
    }
    
    n = 0;
    while(1){
        n++;
        if(n == 10){
            break;
        }
    }
    
    n = 0;
    while(n < 10){
        n++;
        if(n % 2 == 1){
            continue;
        } 
        
        printf("The number %d is even \n", n);
    }
    
    
    return 0;
}