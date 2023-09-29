#include <stdio.h>

int main(void) {
    char letter = 'a';
    char LETTER = 'A';

    while (letter <= 'z') {
        {
            putchar(letter);
            letter++;
        }
    }
    
    while (LETTER <= 'Z'){
            putchar(LETTER);
            LETTER++;
    }

    putchar('\n'); // Print a newline character to end the line
    return 0;
}

