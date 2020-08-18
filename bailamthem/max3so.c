#include "max3so.h"

int max3num(int num1, int num2, int num3)
{
	int max = num1;
	if (num2 >= num3 && num2 >= num1)
	{
		max = num2;
	}
	else if (num3 >= num2 && num3 >= num1)
		{
			max = num3;
		}

	return max;
}

void input3Num()
{
	int num1 = 0, num2 = 0, num3 = 0;
	printf_s("Chuong trinh tim so lon nhat giua 3 so nhap vao \n");
	printf_s("Nhap gia tri cua num1 , num2 , num3 : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	int mx = max3num(num1, num2, num3);

	printf_s("Gia tri lon nhat cua 3 so %d , %d , %d la: %d\n", num1,num2,num3,mx);
}