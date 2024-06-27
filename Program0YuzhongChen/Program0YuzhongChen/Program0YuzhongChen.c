#include <stdio.h>

int main() {
    char name[] = "Yuzhong Chen";
    char courseID[] = "60140";
    char coursesTaken[][20] = { "C Programming" };

    printf("My name is %s, I'm in course %s. I've taken:\n", name, courseID);
    for (int i = 0; i < sizeof(coursesTaken) / sizeof(coursesTaken[0]); i++) {
        printf("%s\n", coursesTaken[i]);
    }

    int number1, number2;

    printf("\nGive me a number: ");
    scanf("%d", &number1);
    printf("Give me a second number: ");
    scanf("%d", &number2);

    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    float quotient = (float)number1 / number2;

    printf("\nThe sum is %d\n", sum);
    printf("The difference is %d\n", difference);
    printf("The product is %d\n", product);
    printf("The quotient is %.2f\n", quotient);

    return 0;
}