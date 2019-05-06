#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
	int m = 0;
	int sum = 0;
	if (n != 0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + DigitSum(n);
	}
	return sum;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", DigitSum(a));
	system("pause");
	return 0;
}