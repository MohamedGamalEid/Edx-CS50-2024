#include <cs50.h>
#include <stdio.h>

int main(void) {
    int height;

    // Prompt user for pyramid height
    do {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    // Build the pyramid
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        // Print hashes
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

