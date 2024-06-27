#include <stdio.h>

int main() {
    char userInput;

    printf("Enter a character: ");
    scanf_s(" %c", &userInput);

    switch (tolower(userInput)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel\n");
        break;
    case 'y':
        printf("Sometimes\n");
        break;
    default:
        printf("Consonant\n");
        break;
    }

    return 0;
}