#include <iostream>


int main(int argv, char* argc[]) {
	int v = 0;
	int t = 0;
	scanf_s("%d", &v);
	scanf_s("%d", &t);
	int s = v * t;
	printf("%d", ((s%109) + 109)%109+1);
	return EXIT_SUCCESS;
	;
}