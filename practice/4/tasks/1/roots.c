#include <stdio.h>

double root(int number) {
    double root = number / 2;
    for (int i = 0; i < 20; i++) {
        root = (double) (0.5) * (root + (double) (number/root));
    }
    return root;
}

int parse_number(int number) {
    if (number != 0) {
        printf("%f\n", root(number));
        return 1;
    }
    return 0;
}

int main() {
    int number, repeat = 1;
    while (repeat) {
        printf("Enter a natural number:\n");
        scanf(" %d", &number);
        repeat = parse_number(number);
    }
    printf("Exiting!\n");
    return 0;
}
