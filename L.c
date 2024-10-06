#include <stdio.h>

int main() {
    int height = 5; // Height of the "L"
    int width = 3;  // Width of the "L"

    // Loop through each row
    for (int i = 0; i < height; i++) {
        // Loop for vertical part of "L"
        if (i < height - 1) {
            printf("*\n");
        } else {
            // Loop for horizontal part of "L"
            for (int j = 0; j < width; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
