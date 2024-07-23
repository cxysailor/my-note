/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-11-fibonacci.c
#   Last Modified : 2024-05-16 14:33
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void fibo(int counter);

int main(void)
{
	int number;

	printf("Enter a positive integer (q to quit): ");
	while (scanf("%d", &number) == 1)
	{
		/** 排除非正整数 */
		if (number <= 0)
			printf("Enter an integer which >= 0 !");
		fibo(number);
		putchar('\n');
		printf("Enter another positive integer (q to quit): ");
	}
	printf("Done.\n");

	return 0;
}
/** 计算斐波那契数列的前N项 */
void fibo(int counter)
{
	int prev = 0; /** 前一个数字 */
	int curr = 1; /** 当前数字 */
	int next = 0; /** 后一个数字 */
	int i;

	for (i = 1; i <= counter; i++)
	{
		if (i == 1) /** 处理第1个输出 */
		{
			next = 1;
			printf("%8d ", next);
		}
		else
		{
			next = prev + curr;
			prev = curr;
			curr = next;
			printf("%8d ", next);
			if (i % 5 == 0)
				printf("\n");
		}
	}
}
