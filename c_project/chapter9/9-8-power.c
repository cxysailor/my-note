/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-8-power.c
#   Last Modified : 2024-05-05 17:40
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <stdlib.h>

double power(double n, int p);

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
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power tryp --- bye!\n");

	return 0;
}
double power(double n, int p)
{
	double pow = 1.0;
	int i;

	for (i = 1; i <= abs(p); i++)
		pow *= n;
	/** 处理0的任何次幂 */
	if (n == 0)
	{
		printf("%g to the power any numbers is not defined, so treat it as 1\n", n);
		pow = 1.0;
	}
	/** 处理负次幂 */
	if (p < 0)
		pow = 1.0 / pow;

	return pow;
}
