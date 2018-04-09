#include <stdio.h>
/*
 * Using pointer arithmetic, write a function that counts negative and
 * positive numbers in an array. Use this function in main program on a
 * arbitrary array and and writeout the number of positive numbers,
 * number of negative numbers and the number of zeros.
 */

void count(unsigned *p, int size, int *o, int *e);

int main() {
    int odds = 0, evens = 0, size;
    unsigned n[8] = {10, 3, 3, -1, -3, -4, -2, -3};
    size = sizeof n/sizeof(n[0]);
    count(n, size, &odds, &evens);
    printf("%d\n", evens);
    printf("%d\n", odds);
    return 0;
}

void count(unsigned *p, int size, int *o, int *e) {
    // copy the pointer
    unsigned *q = p;
    // move the pointer! and compare it to the last value in the array
    while (q != p + size) {
        printf("%d\n", *q);
        // if (*q++ > 0) { // why no work?
        if (*q++ % 2 == 0) {
            ++*e;
        } else {
            ++*o;
        }
    }
}

// this doesn't work because the pointer doesn't know the size of the array
// void count(unsigned *p, int *o, int *e) {
//     int size = (sizeof p/sizeof(int));
//     printf("%d\n", size);
//     for (int i = 0; i < size - 1; i++)
//     {
//         printf("%d\n", p[i]);
//     }
// }