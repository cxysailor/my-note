/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : lesser.c
#   Last Modified : 2024-02-21 18:34
#   Describe      : 返回两个数字中的较小者
#
# ====================================================*/

# include <stdio.h>

double min(double x, double y);

double main(void)
{
	double num1, num2;
	double less;
	
	puts("Please enter 2 numbers:");
	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		less = min(num1, num2);
		printf("The lesser number of %.2lf and %.2lf is: %.2lf\n",  num1, num2, less);
		printf("Please enter 2 numbers:\n");
	}

	return 0;
}

double min(double x, double y)
{
	double min;

	if (x < y)
		min = x;
	else
		min = y;

	return min;
	/** return  (x < y) ? x : y; */
}
