
#include <math.h>
#include <iostream>

int main(int argc, char* argv[])
{

	int x1 = 0;
	int y1 = 0;
	int r1 = 0;
	scanf_s("%d %d %d", &x1, &y1, &r1);

	int x2 = 0;
	int y2 = 0;
	int r2 = 0;
	scanf_s("%d %d %d", &x2, &y2, &r2);



	int sqrx =pow((x1 - x2), 2);
	int sqry = pow((y1 - y2), 2);
	int huy = sqrt(sqrx + sqry);


	if (huy+r2>=r1 and huy+r1>=r2 and r1+r2>=huy)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return EXIT_SUCCESS;
}