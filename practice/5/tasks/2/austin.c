#include <stdio.h>

/* Write a function of the following prototype:
 * void powers(double x, double *x4, double *x8, double *x15);
 * The function should calculate x^4 , x^8 i x^15. Test the function in main
 * program.
 */

void powers(double x, double *x4, double *x8, double *x15);
void pow_fun(double base, int power, double * result);

int main() {
    double x = 2.000000;
    double x4, x8, x15;

    printf("values %f %f %f %f\n", x, x4, x8, x15); // values 2.000000 0.000000 0.000000 0.000000
    powers(x, &x4, &x8, &x15);
    printf("values %f %f %f %f\n", x, x4, x8, x15); // values 2.000000 32.000000 512.000000 65536.000000
    return 0;
}

void powers(double x, double *x4, double *x8, double *x15) {
    pow_fun(x, 4, x4);
    pow_fun(x, 8, x8);
    pow_fun(x, 15, x15);
}

void pow_fun(double base, int power, double *result) {
    *result = base;
    for (int i = 0; i < power; ++i)
    {
        *result *= base;
    }
}