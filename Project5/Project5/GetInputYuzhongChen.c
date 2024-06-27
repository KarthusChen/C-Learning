#include <stdio.h>

int compareGuess(int guess) {
    int number;

    printf("Guess the number: ");

    scanf("%d", &number);

    if (number < guess) {
        return -1;
    }
    else if (number > guess) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int arbitrary_argument = 42; 
    int result = compareGuess(arbitrary_argument);

    printf("Result: %d\n", result);

    return 0;
}
