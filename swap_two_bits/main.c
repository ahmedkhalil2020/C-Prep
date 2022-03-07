#include <stdio.h>

int swap_TwoBits(int num, int n1, int n2) {
	num ^= 1 << n1;
	num ^= 1 << n2;

	return num;
}

int main() {

	int num = 5;
	int n1 = 5;
	int n2 = 3;


	printf("%d before Swapping %d, %d bits together \nis %d ",num,n1,n2, swap_TwoBits(num,n1,n2));
	return 0;
}

