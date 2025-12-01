#include <stdio.h>
#include <ncurses.h>

// #include <curses.h>
// #include <conio.h> // windows
int main(){
    int key;
    key =   getch();
    printf("%c", key);
    return 0;
}