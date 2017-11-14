#include <stdio.h>

struct point {
    int x;
    int y;
};

typedef struct{
    char * brand;
    int year;
} car;

void draw(struct point p){
    printf("The location is %d,%d\n", p.x, p.y);
}

int main(){
    
    struct point pos;
    pos.x = 5;
    pos.y = 10;
    draw(pos);

    car myCar;
    myCar.brand = "Ford";
    myCar.year = 2008;
    

    return 0;
}