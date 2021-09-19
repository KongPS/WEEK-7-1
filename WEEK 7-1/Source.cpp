#include <stdio.h>

int main()
{
	int x;
	printf("Total People = ");
	scanf_s("%d", &x);
	int sum=0;
	for (int n = 1; n < x; n++)
	{
		sum = sum + (x - n);
	}
	printf("Total Shakehand = %d", sum);
}