#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	int v = 0;
	int p = 0;
	int c = 0;
	int j = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d %d", &v, &p);
		if (p == 1 and v > c) {
			c = v;
			j = i + 1;
		}
	}
	if (j == 0) {
		printf("-1");
	}
	else {
		printf("%d", j);
	}
	return 0;
}
