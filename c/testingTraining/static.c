#include <stdio.h>

int runner(){
    int count = 0;
    count++;
    return count;
}

int srunner(){
    static int count = 0;
    count++;
    return count;
}

int main(){
    //this will show 1, twice on the screen, as they run independently
    printf("%d ", runner());
    printf("%d ", runner());
    
    printf("\nWith static: \n");
    printf("%d ", srunner());
    printf("%d ", srunner());
    
    printf("\n");
    
}