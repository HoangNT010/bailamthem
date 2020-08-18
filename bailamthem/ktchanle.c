#include "ktchanle.h"

bool isOdd(int num)
{
	if (num % 2 != 0)
	{
		return true;
	}
	return false;
}

void inputChanLe()
{
	int num = 0;
	printf_s("Chuong trinh kiem tra tinh chan le cua N \n");
	printf_s("Nhap gia tri cua N : ");
	scanf_s("%d", &num);

	bool result = isOdd(num);

	if (result == true)
	{
		printf_s("So %d la so le\n", num);
	}
	else
	{
		printf_s("So %d la so chan\n", num);
	}
}