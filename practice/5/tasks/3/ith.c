#include <stdio.h>

/*
 * Write a function that returns i-th digit of a binary representation of a
 * number n (both values are to be passes as arguments).
 * Test the function in main program by accepting entries from a user
 * until a zero is entered, and writing third and fourth digit of each entry.
 */

int pow_fun(int base, int pow)
{
    int result = 1;
    for (int i = 0; i < pow; ++i)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int digit = 251, binary = 0, count = 0, possible, solution = 404, position = 2;
    printf("digit: %d\n", digit);
    while (digit)
    {
        possible = digit % 2;
        binary += pow_fun(10, count) * possible;
        if (count++ == position)
        {
            solution = possible;
        }
        digit >>= 1;
    }
    printf("binary: %d\n", binary);
    printf("___\nposition: %d\nsolution: %d\n___\n", position, solution);

    return 0;
}