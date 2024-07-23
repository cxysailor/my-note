/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-1-min.c
#   Last Modified : 2024-04-24 19:52
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

float min(float x, float y);

int main(void)
{
	float num1;
	float num2;

	printf("Enter two numbers: ");
	scanf("%f %f", &num1, &num2);
	printf("Minimum between %.2f and %.2f is %.2f\n", num1, num2, min(num1, num2));

	return 0;
}
float min(float x, float y)
{
	float temp;

	if (x > y)
	{
		temp = y;
		y = x;
		x = temp;
	}

	return x;
	/** 或者使用一条语句 */
	/** return (x < y) ? x : y; */
}
