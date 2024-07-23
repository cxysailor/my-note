/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-10-convertnumbers.c
#   Last Modified : 2024-05-06 09:20
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void to_base_n(unsigned long number, int n);

int main(void)
{
	unsigned long number;
	int n;

	printf("程序实现将十进制数字转换为10以内的其他进制数：\n");
	printf("Enter two integers (q to quit):\n");
	while (scanf("%lu %d", &number, &n) == 2)
	{
		/** 将进制限制在2-10范围内 */
		if (n <= 2 || n >10)
			printf("Enter the integer within (1 - 10):\n");
		else
		{
			printf("十进制数[%lu]转换为[%d]进制数: ", number, n);
			to_base_n(number, n);
			putchar('\n');
		}
		printf("Enter two integers (q to quit):\n");
	}
	printf("Done.\n");

	return 0;
}
/** 进制转换 */
void to_base_n(unsigned long number, int n)
{
	int r;

	r = number % n;
	if (number >= n)
		to_base_n(number / n, n);
	printf("%d", r);
}
