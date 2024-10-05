#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int a = 0;
	int c = 0;
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a);
		if (a <= 437) {
			printf("Crash %d", i + 1);
			return 0;
		}
	}
	printf("No crash");
	return 0;
}