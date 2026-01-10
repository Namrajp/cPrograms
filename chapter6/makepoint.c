#include <stdio.h>
#define XMAX 30
#define YMAX 40

struct point makepoint(int, int);
struct point addpoint(struct point, struct point);

struct point
{
    int x;
    int y;
};
struct rect {
    struct point pt1;
    struct point pt2;
};
struct rectangle {
    struct point top_left;
    struct point bottom_right;
};
struct point middle;
struct rectangle r1 = { {0,0}, {100,200} }; // Nested struct initialization  
struct rectangle r2 = { .top_left = {10,12}, .bottom_right = {110,210} }; // Designated initializers  

int main(void) {
    struct rect screen;

    screen.pt1 = makepoint(4,5);
    screen.pt2 = makepoint(XMAX,YMAX);
    middle = makepoint((screen.pt1.x + screen.pt2.x)/2, (screen.pt1.y + screen.pt2.y)/2);

    printf("screen co-orginates initialize using function x=%i, y=%i \n", screen.pt1.x, screen.pt1.y);
    printf("screen co-orginates initialize using function x=%i, y=%i \n", screen.pt2.x, screen.pt2.y);
    printf("\n");

    printf("screen co-orginates middle x=%i, y=%i \n", middle.x, middle.y);
    printf("\n");
    printf("rect top left coordinates: x=%d, y=%d \n", r1.top_left.x, r1.top_left.y);
    printf("rect bottom right coordinates: x=%d, y=%d \n", r1.bottom_right.x, r1.bottom_right.y);

    printf("\n");

     printf("rect top left coordinates: x=%d, y=%d \n", r2.top_left.x, r2.top_left.y);
    printf("rect bottom right coordinates: x=%d, y=%d \n", r2.bottom_right.x, r2.bottom_right.y);
    printf("\n");

    screen.pt1 = addpoint(screen.pt1, screen.pt2);
    printf("Result of adding points: x=%d, y=%d \n", screen.pt1.x, screen.pt1.y);
}
struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
} 