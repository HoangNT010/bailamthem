#include "tbphsl.h"


long long sumPow2odd(int n)
{
	long long sum = 0;
	if (n >= 0)
	{
		for (long long i = 1; i <= n; i = i + 2)
		{
			sum += i * i;
		}
	}
	else
	{
		for (long long i = 1; i >= n; i = i - 2)
		{
			sum = sum + (i * i);
		}
	}
	return sum;
}

void inputSumN()
{
	int n = 0;
	printf_s("Chuong trinh tinh tong binh phuong so le ti 1 den N \n");
	printf_s("Nhap gia tri cua N: ");
	scanf_s("%d",&n);

	long long s = sumPow2odd(n);

	printf_s("Tong binh phuong cac so le tu 1 den %d la: %lld\n", n, s);
}