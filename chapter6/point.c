#include <stdio.h>

struct point {
    int x;
    int y;
    } ;

struct point p0 = { 5, 15} ; // Named struct variable

struct point p1 = { 10,20};
struct point points [] = {{ 10,20}, { 30,40}, { 50,60}  };

enum boolean { false, true };
enum bool { zero, one, random_value = 42 };
enum test { a, b, c,d, e,f };
enum either { No, Yes};
enum months { January=1, February, March, April, May, June, July, August, September, October, November, December };
struct {
    int y;
    int z;
} anon_struct = {0, 1};

int main(void) {


    printf("Point coordinates: x=%d, y=%d \n", p1.x, p1.y);
    printf("Point coordinates as integers: x=%d, y=%d \n", (int) p1.x, (int) p1.y);
    printf("It's my anonymous struct values!:  %d, %d \n",  anon_struct.y, anon_struct.z);
    for(int i=0; i<3; i++) {
        printf("It's my 0 and 1 and random values!  %d, %d \n", points[i].x, points[i].y);
    }

    printf("Either No or Yes: %d , %d \n", No, Yes);
    printf("Test enum values: %d , %d , %d, %d , %d , %d\n", a, b, c, d, e, f);
    printf("Boolean values: %d , %d \n", false, true);
    printf("On off values: %d , %d \n", No, Yes);

    printf("Bool enum values: %d , %d , %d \n", zero, one, random_value);
    printf("Months enum values: %d , %d , %d , %d , %d , %d , %d , %d , %d , %d , %d , %d \n", January, February, March, April, May, June, July, August, September, October, November, December);
}