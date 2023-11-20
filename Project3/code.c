#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//接受一个整形，按照顺序打印他的每一位
//例如：输入1234，输出：1 2 3 4.
//%d是打印有符号的整数（会有正负数）
//%u是打印无符号的整数
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}

//函数的递归的实现(把大事化小）

//void print(unsigned int n)//调试即可得知运行过程
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}

