/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-9-dnumbers.c
#   Last Modified : 2024-03-24 16:49
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

double calculation(double num1, double num2);

int main(void)
{
	double num1;
	double num2;

	printf("Enter two float numbers (q to quit): ");
	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		printf("The result: %lf\n", calculation(num1, num2));
		printf("Enter next set of numbers (q to quit): ");
	}
	printf("Done.\n");

	return 0;
}

double calculation(double num1, double num2)
{
	return (num1 - num2) / (num1 * num2);
}
