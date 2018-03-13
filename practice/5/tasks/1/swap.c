/*
 *  Write a function that takes three pointers to three variables e.g.: a, b and c
 *  and rotates their values according to following rule:
 *  a -> b
 *  b -> c
 *  c -> a
 *  If any of the pointers is a null pointer, the function should stop executing and
 *  return -1.
 *  If two of the pointers point to the same address, the function should stop
 *  executing and return -2.
 *  If the values were successfully rotated, the function should return 0.
 *  Test the function in main program.
*/
#include <stdio.h>

void test_swap();
int swap(int *a, int *b, int *c);

int main()
{
    int result = -1;
    int *a, *b, *c;
    int x = 1, y = 4, z = 3;
    // a = &x;
    // b = &y;
    // c = &z;
    // printf("%d %d %d\n", *a, *b, *c);
    // a = b = c = NULL;
    a = b = c;
    result = swap(a, b, c);
    if (result == -2) {
        // same address -2
        printf("%s\n", "same address found");
    } else if (result == -1) {
        // null pointers
        printf("%s\n", "null pointers");
    } else {
        // success 0
        printf("%d %d %d\n", *a, *b, *c);        
    }
    return result;
}

int swap(int *a, int *b, int *c) {
    if (!a || !b || !c) {
        return -1;
    }
    if (a == b || a == c || b == c) {
        return -2;
    }
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
    return 0;
}