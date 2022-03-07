#include <stdio.h>
int factorial(int a) {
	for (int i = a - 1; i != 1; i--) {
		a *= i;
	}
	return a;
}
int main() {
	int a = 5;

	printf("The factorial of %d is %d",a,factorial(a));
	return 0;
}
