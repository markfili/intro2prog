#include <stdio.h>
#define MUL(x, y) x*y
#define ADD(x, y) x+y

/*
 * Write a program that enables a user to keep entering numbers until a
 * zero is entered. Program should then write a product of all even
 * numbers, a sum of odd numbers and the difference between those
 * two.
 */

void print_result(int prod, int sum) {
    printf("----------\nProd: %d\nSum: %d\nDiff: %d\n", prod, sum, prod-sum);
}

int main() {
    int num, prod_even = 1, sum_odd;

    while(1) {
        printf("Num: ");
        scanf(" %d", &num);
        if (num == 0) {
            print_result(prod_even, sum_odd);
            break;
        }
        if (num % 2 == 0) {
            prod_even = MUL(prod_even, num);
        } else {
            sum_odd = ADD(sum_odd, num);    
        }
    }

    return 0;
}