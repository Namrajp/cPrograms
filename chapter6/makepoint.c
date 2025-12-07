#include <stdio.h>

struct point makepoint(int x, int y){
    struct point temp;
        temp.x = x;
        temp.y = y;
    } ;

    struct point addpoint(struct point p1, struct point p2){
        p1.x += p2.x;
        p1.y += p2.y;
        return p1
        } ;

struct rect screen;
struct point middle;
struct point makepoint(int, int);


screen.pt1 = makepoint(0, 0);
screen.pt2 = makepoint(XMAX,YMAX);
middle = makepoint((screen.pt1.x = screen.pt2.x)/2, (screen.pt1.y = screen.pt2.y)/2)

struct rect r1 = { {0,0}, {100,200} }; // Nested struct initialization  
struct rect r2 = { .top_left = {10,10}, .bottom_right = {110,210} }; // Designated initializers  
int main(void) {

    printf("rect top left coordinates: x=%d, y=%d \n", r1.top_left.x, r1.top_left.y);
    printf("rect bottom right coordinates: x=%d, y=%d \n", r1.bottom_right.x, r1.bottom_right.y);

}