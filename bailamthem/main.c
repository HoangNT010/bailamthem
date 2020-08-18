#include "tbphsl.h"
#include "max3so.h"
#include "ktchanle.h"
#include "usclnvabscnn.h"

int selection()
{
	int con = 0;
	do {
		printf_s("------------------Menu Selection-----------------\n");
		printf_s("1/ Tinh tong binh phuong cac so le tu 1 den N\r\n");
		printf_s("2/ Tim max cua 3 so a,b,c nhap tu ban phim\r\n");
		printf_s("3/ Nhap mot so nguyen tu ban phim, kiemm tra xem do la so chan hay le\r\n");
		printf_s("4/ Tim uoc so chung lon nhat va boi so chung nho nhat cua 2 so nguyen nhap tu ban phim\r\n");
		printf_s("9/ Exit\r\n");
		printf_s("-------------------------------------------------\n");
		printf_s("Nhap so can chon: ");
		scanf_s("%d", &con);
		switch (con)
		{
			case 1:
			{
				inputSumN();
				break;
			}
			case 2:
			{
				input3Num();
				break;
			}
			case 3:
			{
				inputChanLe();
				break;
			}
			case 4:
			{
				inputUscBsc();
				break;
			}
			case 9:
			{
				break;
			}
			default:
			{
				printf_s("Ngoai pham vi ho tro cua chuong trinh. Xin vui long chon lai\r\n");
				break;
			}
		}
	} while (con != 9);

	return 0;
}

int main()
{
	int res = selection();
	return 0;
}