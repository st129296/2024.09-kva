#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	int a = 0;
	int c = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf_s("%d", &a);
			if (a == 1) {
				c += 1;
			}
		}
	}
	printf("%d", c / 2);

	return 0;
}
//у меня настроение на еще один анек
//идет медведь по лесу, видит, машина горит, сел в нее, и сгорел.