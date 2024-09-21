#include <iostream>


int main(int argv, char* argc[]) {
	int a = 0;
	scanf_s("%d", &a);
	int a1 = (a - a % 10 - a % 100)/100;
	int a2 = (a % 100 - a % 10) / 10;
	int a0 = a % 10;
	printf("%d", a0 + a1 + a2 + 1);
	return EXIT_SUCCESS;
	;
}