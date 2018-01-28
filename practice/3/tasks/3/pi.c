#include <stdio.h>

/*
 * Write a program that reads the order number n from the user (where n
 * must be an element of [n, 100]), and calculate and writeout the pi
 * using the following order:
 * pi/4 = 1 - 1/3 + 1/5 - 1/7 + ... +- 1/(2*n - 1)
 */

int power(int base, int power) {
	int result = 1;
	int i;
	printf("%d\n", power);
	for (i = 0; i < power; i++) {
		result *= base;
	}
	return result;
}

void print_pi(int n) {
	int k;
	double pi = 0;
	for (k = 0; k <= n; k++) {
		pi += (double) power(-1, k)/(2*k+1);
	}
	printf("-------\nPi: %f\n", pi*4);
}

int main() {
	int n;
	while(1) {
		n = 0;
		printf("Enter n: ");
		scanf(" %d", &n);
		if (n > 100) {
			printf("n has to be smaller than 100\n");
			continue;
		} else if (n < 0) {
			printf("n has to be larger than 0\n");
			continue;
		} else if (n == 0) {
			printf("exiting\n");
			break;
		}
		print_pi(n);
	}

	return 0;
}

