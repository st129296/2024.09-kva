#include <iostream>


int main(int argv, char* argc[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	printf("%d", c * b * a * 2);
	return EXIT_SUCCESS;
	;
}