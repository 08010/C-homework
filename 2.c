/*练习 2　字符型变量的溢出与分析
编写程序，定义一个 unsigned char 变量，
赋初始值 255，再让它加 1，输出结果，
对结果进行分析；再定义一个 signed char 变量，
赋初始值为 127，对其加 1 后输出结果，对结果进行分析。*/

//#include <stdio.h>
//int main()
//{
//	unsigned char a = 255;
//	a++;
//	printf("a = %u\n", a);
//	char b = 127;
//	b++;
//	printf("b = %d\n", b);
//	system("pause");
//	return 0;
//}