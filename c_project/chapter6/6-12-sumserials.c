/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-12-sumserials.c
#   Last Modified : 2024-03-24 22:05
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void sums(int count);

int main(void)
{
	int counter; /** 计算的项数 */

	printf("Enter a integer for calculating (<=0 to quit):\n");
	while (scanf("%d", &counter) == 1 && (counter > 0))
	{
		sums(counter);
		printf("Enter next integer for calculating (<=0 to quit):\n");
	}
	printf("Done.\n");

	return 0;
}

void sums(int count)
{ /** 计算序列的和 */
	double numerator = 1.0; /** 分子 */
	double denominator = 1.0; /** 分母 */
	double sums1 = 0; /** 序列1的和 */
	double sums2 = 0; /** 序列2的和 */
	int flag = -1; /** 控制正负号 */

	while (count-- > 0)
	{
		sums1 += numerator / denominator;
		flag *= -1;
		sums2 += numerator / (flag * denominator);
		denominator++;
	}
	printf("Sums of 1.0+1.0/2.0+1.0/3.0+1.0/4.0+... is %lf.\n", sums1);
	printf("Sums of 1.0-1.0/2.0+1.0/3.0-1.0/4.0+... is %lf.\n", sums2);
}
