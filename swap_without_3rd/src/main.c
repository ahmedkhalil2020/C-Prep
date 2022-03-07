#include <stdio.h>

void swap_v1(int a, int b){
	printf("\na=%d, b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d, b=%d",a,b);
}

void swap_v2(int a, int b){
	printf("\na=%d, b=%d",a,b);
	a^=b;
	b^=a;
	a^=b;
	printf("\na=%d, b=%d",a,b);
}

int main (void){
	int a,b;
	a=1;
	b=2;
	printf("\nswap_v1");
	swap_v1(a,b);
	printf("\n*********************");
	printf("\nswap_v2");
	swap_v2(a,b);

}
