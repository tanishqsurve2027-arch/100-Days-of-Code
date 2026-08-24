/* Write a program to input a character and check whether it is a vowel or consonant using if–else. */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char character;

    if (scanf(" %c", &character) != 1 || !isalpha((unsigned char)character)) {
        return 1;
    }
    character = tolower((unsigned char)character);
    puts(character == 'a' || character == 'e' || character == 'i' ||
             character == 'o' || character == 'u' ? "Vowel" : "Consonant");
    return 0;
}
