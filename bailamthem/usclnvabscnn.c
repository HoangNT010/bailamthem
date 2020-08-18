#include "usclnvabscnn.h"

int ucln(int a, int b)
{
	int ucln = 0;
	if (a == 0 || b == 0)
	{
		ucln = a + b;
		return ucln;
	}
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	ucln = a;
	return ucln;
}

int bcnn(int a, int b)
{
	int bcnn = 0;
	int maxV = a * b;
	int mx = a;
	if (b > a)
	{
		mx = b;
	}
	for (int i = mx; i <= maxV; i = i + mx)
	{
		if (i % a == 0 && i % b == 0)
		{
			bcnn = i;
			break;
		}
	}
	return bcnn;
}

void inputUscBsc()
{
	int a = 0, b = 0;
	printf_s("Chuong trinh tim USCLN va BSCNN cua a va b\n");
	printf_s("Nhap gia tri cua a va b : ");
	scanf_s("%d%d", &a, &b);

	int Usc = ucln(a , b);
	int Bsc = bcnn(a, b);

	printf_s("Uoc so chung lon nhat cua a va b la: %d\n", Usc);
	printf_s("Boi so chung nho nhat cua a va b la: %d\n", Bsc);
}