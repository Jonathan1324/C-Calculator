#include <stdio.h>
#include "calculator/calculate.c"

int main() {
    double number1;
    double number2;
    char operator;
    printf("Enter your first number: ");
    scanf("%lf", &number1);

    printf("\nEnter a operator: ");
    scanf(" %c", &operator);

    printf("\nEnter your second number: ");
    scanf("%lf", &number2);

    printf("\n\n");
//    printf("%lf %c %lf", number1, operator, number2);

    calculate(operator, number1, number2);

    return 0;
}

void schwanz() {
    printf("schwanz");
}

void arsch() {
    printf("arsch");
}

void hs() {
    printf("Hs");
}

int hurensohn() {
    printf("Hurensohn");
    return 0;
}

void Luemmel() {
    printf("Luemmel");
}

void squidGame() {
    printf("Squid Game");
}

void Hi() {
    printf("Hi");
}

void kacke() {
    printf("Kacke");
}

char* test() {
    return "test";
}
