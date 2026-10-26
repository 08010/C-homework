#include <stdio.h>
int main()
{
	int a, b, c;
	printf("请输入两个整数:");
	while (1)
	{
		if ((scanf_s("%d%d", &a, &b)) != 2)
		{
			
			printf("请重新输入\n");
			a = 0;
			b = 0;
			scanf_s("%d%d", &a, &b);
			c = b;
			b = a;
			a = c;
			printf("a = %d\n", a);
			printf("b = %d\n", b);
			system("pause");
			return 0;
		}
	}
}