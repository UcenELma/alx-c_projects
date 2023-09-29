
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    char letter = 'a';

    while (letter <= 'z') {
        if(letter != 'a' && letter != 'z') {
            putchar(letter);
            letter++;
        }
    }

    putchar('\n'); // Print a newline character to end the line
    return 0;
}
