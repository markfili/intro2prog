#include <stdio.h>
#include <stdlib.h>

/*
 *   Write a program that writes out the ASCII table using entered number
 *   of columns.
 */

int main(int argc, char *argv[]) {
    // <debug> printf("%d ", argc);
    if (argc > 1) {
        unsigned int i;
        int count; // number of columns
        // <debug>
        // for ( i = 0; i < argc; i++) {
        //     printf("%s ", argv[i]);
        // }
        // </debug>
        count = atoi(argv[1]);
        for (i = 0; i < 400; i++) {
            printf("%4d ", i);
            printf("%4c ", i);
            if (i % count == 0) {
                printf("\n");
            }
        }
        printf("\n");
    } else {
        printf("Missing arguments.\nUsage: ./ascii [number of columns]");
    }
    
    return 0;
}