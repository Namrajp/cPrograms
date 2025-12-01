    #include <termios.h>
    #include <unistd.h>
    #include <stdio.h>


        int getch(void) {
        struct termios oldattr, newattr;
        int ch;
        // Get current terminal settings
        tcgetattr(STDIN_FILENO, &oldattr);
        newattr = oldattr;
        // Disable canonical mode (ICANON) and echoing (ECHO)
        newattr.c_lflag &= ~(ICANON | ECHO);
        // Set new terminal settings immediately (TCSANOW)
        tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
        // Read a single character
        ch = getchar();
        // Restore original terminal settings
        tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
        return ch;
    }
    int main() {
        printf("Press a key: ");
        int key = getch();
        printf("\nYou pressed: %c (ASCII: %d)\n", (char)key, key);
        return 0;
    }