#include <stdio.h>

void text_to_binary(const char *text) {
    while (*text) {
        for (int i = 7; i >= 0; i--) {
            printf("%d", (*text >> i) & 1);
        }
        printf(" test");  // Add a space between each 8-bit representation
        text++;
    }
}

int main() {
    const char *text_input = "MYLOVEISONLYME";
    
    printf("Text: %s\n", text_input);
    printf("Binary: ");
    text_to_binary(text_input);

    return 0;
}
