#include <stdio.h>

int main(){
    int numbers[10]; //creates an array of integers, 10 long
    
    numbers[5] = 50;
    numbers[6] = 60;//defining values within the array
    
    printf("The 7th number in the array is %d", numbers[6]); //outputting the array, index of 6
    
    //multi dimentional ararys
    
    int moreNumbers[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    //same as:
    int extraNumbers[3][4] = {1,2,3,4,5,6,7,8,9,10,11};
    
    int out = moreNumbers[1][2];
    
    printf("\nThe outputted number from the 2D array is %d", out);
    
    return 0;
}