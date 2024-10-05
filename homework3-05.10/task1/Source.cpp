#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf("%d", &n);
	int c = 0;
	int a = 0;

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a);
		if (a == 1) {
			c += 1;
		}
	}

	if (c > n - c) {
		printf("%d", n - c);
	}
	else {
		printf("d", c);
	}

	return 0;
}

	