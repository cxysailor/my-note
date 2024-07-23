/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-9-recursive_power.c
#   Last Modified : 2024-05-05 22:59
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <stdlib.h>

double power(double n, int p);
double result_process(double n, int p);

int main(void)
{
	double x;
	double xpow;
	int exp;

	printf("Enter a number and the integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = result_process(x, exp);
		/** 处理0的幂 */
		if (x == 0)
			printf("%g to the power any numbers is not defined, so treat it as 1\n", x);
		else
			printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power tryp --- bye!\n");

	return 0;
}
/** 计算一个数的整数次幂 */
double power(double n, int p)
{
	double pow = 1.0;
	int times ; /** 保存递归的次数,即等于p */

	/** 取p的绝对值 */
	times = abs(p);
	/** 递归方法 */
	if (times > 0)
		pow = n * power(n, times - 1);

	return pow;
}
/** 对结果进行处理 */
double result_process(double n, int p)
{
	float result;

	result = power(n, p);
	/** 处理0的任何次幂 */
	if (n == 0)
	{
		result = 1.0;
	}
	/** 处理负次幂 */
	if (p < 0)
		result = 1.0 / result;

	return result;
}
