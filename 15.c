//#include <stdio.h>
//int main()
//{
//	int num, bai, shi, ge, ji, a, b, c,max,min;
//	printf("请输入一个三位数: ");
//	scanf_s("%d", &num);
//	while (1)
//	{
//		if (num >= 100 && num < 1000)
//		{
//			bai = num / 100;
//			shi = (num / 10) % 10;
//			ge = num % 10;
//			printf("百位: %d\n", bai);
//			printf("十位: %d\n", shi);
//			printf("个位: %d\n", ge);
//			ji = bai * shi * ge;
//			if (bai > shi && bai > ge)
//			{
//				a = bai;
//				if (shi > ge)
//				{
//					b = shi;
//					c = ge;
//				}
//				else
//				{
//					b = ge;
//					c = shi;
//				}
//			}
//			else if (shi > bai && shi > ge)
//			{
//				a = shi;
//				if (bai > ge)
//				{
//					b = bai;
//					c = ge;
//				}
//				else
//				{
//					b = ge;
//					c = bai;
//				}
//			}
//			else
//			{
//				a = ge;
//				if (bai > shi)
//				{
//					b = bai;
//					c = shi;
//				}
//				else
//				{
//					b = shi;
//					c = bai;
//				}
//			}
//			max = 100 * a + 10 * b + c;
//			min = 100 * c + 10 * b + a;
//			if ((ge * 100 + shi * 10 + bai)==num)
//			{
//				printf("是回文数\n");
//			}
//			else
//			{
//				printf("不是回文数\n");
//			}
//			if ((bai + shi + ge) % 2 == 0)
//			{
//				printf("和是偶数\n");
//			}
//			else
//			{
//				printf("和不是偶数\n");
//			}
//			if (num % ji == 0)
//			{
//				printf("可以整除\n");
//			}
//			else
//			{
//				printf("不可以整除\n");
//			}
//			printf("最大减最小等于: %d\n", max - min);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("请重新输入: ");
//			scanf_s("%d", &num);
//		}
//	}
//}