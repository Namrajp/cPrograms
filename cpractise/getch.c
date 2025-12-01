#include <stdio.h>
#include <ncurses.h>
// #include <curses.h>
// #include <conio.h> // windows
// int main(){
//     char ch;
//     ch = getch();
//     printf("%c", ch);
//     return 0;
// }


    int main() {
        initscr(); // Initialize the ncurses library
        cbreak();  // Disable line buffering (canonical mode)
        noecho();  // Disable echoing of input characters

        printw("Press a key: ");
        int key = getch(); // Read a single character
        printw("\nYou pressed: %c (ASCII: %d)\n", (char)key, key);

        endwin(); // Restore original terminal settings
        return 0;
    }