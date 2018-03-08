#include "stdio.h" // ha? navodniki?
#include "time.h"

int fibon_for(int number) {
    int fibon, first = 0, second = 1;
    for (int i = 1; i < number; ++i) {
        fibon = first + second;
        first = second;
        second = fibon;
        printf("%d ", fibon);
    }
    return fibon;
}

int fibon_rec(int number, int first, int second) {
    int fibon;
    if (--number) {
        fibon = first + second;
        first = second;
        second = fibon;
        printf("%d ", fibon);
        return fibon_rec(number, first, second);
    }
    return second;
}

int parse_number(int number) {
    int result;
    long int starttime, stoptime;
    time_t start, stop;
    if (number != 0) {
        time(&start);
        printf("  %ld  \n", start);
        result = fibon_for(number);
        time(&stop);
        printf("  %ld  \n", stop);
        printf("\nFor: %d in %ldms\n", result, stop - start);
        time(&start);
        printf("  %ld  \n", start);
        result = fibon_rec(number, 0, 1);
        time(&stop);
        printf("  %ld  \n", stop);
        printf("\nRec: %d in %ldms\n", result, difftime(start, stop));
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