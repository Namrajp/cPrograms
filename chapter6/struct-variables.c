struct {
    int member1;
    char member2;
    float member3;
} x, y, z;

int main(void) {
    // Example of struct variable usage
    x.member1 = 10;
    x.member2 = 'A';
    x.member3 = 3.14f;  
    printf("Struct x members: %d, %c, %.2f\n", x.member1, x.member2, x.member3);

    y.member1 = 20;
    y.member2 = 'B';
    y.member3 = 6.28f;  
    printf("Struct y members: %d, %c, %.2f\n", y.member1, y.member2, y.member3);
    z.member1 = 30;
    z.member2 = 'C';
    z.member3 = 9.42f;  
    printf("Struct z members: %d, %c, %.2f\n", z.member1, z.member2, z.member3);    

    // Example of regular integer variables
    int a = 30, b = 40, c = 50;
    printf("Integer variables a, b, c: %d, %d, %d\n", a, b, c);
}