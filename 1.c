#include <stdio.h>
int main()
{
	printf("short: %zu\n", sizeof(char));
	printf("int: %zu\n", sizeof(short));
	printf("long: %zu\n", sizeof(int));
	printf("long long: %zu\n", sizeof(long));
	printf("float: %zu\n", sizeof(long long));
	printf("double: %zu\n", sizeof(float));
	printf("long double: %zu\n", sizeof(double));
	system("pause");
	return 0;
}