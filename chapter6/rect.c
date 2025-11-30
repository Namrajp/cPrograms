#include <stdio.h>

struct point {
    int x;
    int y;
    } ;

struct point p0 = { 5, 15} ; // Named struct variable
struct point p1 = { 10,20};

struct rect {
    struct point top_left;
    struct point bottom_right;
} ;
struct rect r1 = { {0,0}, {100,200} }; // Nested struct initialization  
struct rect r2 = { .top_left = {10,10}, .bottom_right = {110,210} }; // Designated initializers  
int main(void) {

    printf("rect top left coordinates: x=%d, y=%d \n", r1.top_left.x, r1.top_left.y);
    printf("rect bottom right coordinates: x=%d, y=%d \n", r1.bottom_right.x, r1.bottom_right.y);

}