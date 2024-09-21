#include <iostream>


int main(int argv, char* argc[]) {
	int garry = 0;
	int larry = 0;
	int sum = 0;
	scanf_s("%d", &garry);
	scanf_s("%d", &larry);
	sum = garry + larry - 1;
	printf("%d %d", sum - garry, sum - larry);
	return EXIT_SUCCESS;
	;
}