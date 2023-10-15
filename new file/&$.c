#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        printf("Counting: %d\r", i);
        //fflush(stdout); // Flush the output buffer to ensure immediate display
        // You can also use \n to add a newline character to the end of the line
        // so that it starts a new line after counting.
        // printf("Counting: %d\n", i);
    }

    return 0;
}
