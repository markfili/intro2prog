/*
 * Assignment 3
 * Write a function that takes natural number and returns a number that
 * would be the result o removing all odd digits from input number, i.e.:
 * for argument 235809 function should return 280.
 * function prototype:
 * unsigned kick_the_odds(unsigned number);
 * Note: Function shoud not write out a thing!
 */
#include <stdio.h>

int power_fun(int base, int exponent);
unsigned kick_the_odds(unsigned number);
void test_kick();
int test_power();

int main() {
    if (test_power()) {
        test_kick();
    }
}

unsigned kick_the_odds(unsigned number) {
    int resto, power = 0, result = 0;
    while (number != 0) {
        resto = number % 10;
        printf("%d\n", resto);
        number = (number - resto) / 10;
        printf("%d\n", number);
        if (resto % 2 == 0) {
            result += resto * power_fun(10, power);
            power++;
        }
        printf("%d\n", result);
        printf("%d\n", power);
        printf("%s\n", "\n");
    }
    return result;
}

void test_kick() {
    int result = kick_the_odds(235809);
    if (result == 280) {
        printf("%s\n", "Passed!");
    } else {
        printf("%s\n", "Failed!");
    }
    printf("%d\n", result);
}

int test_power() {
    int result = power_fun(10, 2);
    if (result == 100) {
        printf("%s\n", "Power!");
    } else {
        printf("%s\n", "No power!");
    }
    return result == 100;
}

int power_fun(int base, int exponent) {
    int pow = 1;
    for (int i = 0; i < exponent; ++i)
    {
        pow *= base;
    }
    return pow;
}