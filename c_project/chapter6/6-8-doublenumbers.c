/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-8-doublenumbers.c
#   Last Modified : 2024-03-24 16:28
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	double num1;
	double num2;

	printf("Enter two float numbers (q to quit): ");
	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		printf("%lf\n", (num1 - num2) / (num1 * num2));	
		printf("Enter two float numbers (q to quit): ");
	}
	printf("Done.\n");

	return 0;
}
