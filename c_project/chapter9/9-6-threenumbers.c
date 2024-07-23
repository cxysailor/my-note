/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-6-threenumbers.c
#   Last Modified : 2024-05-04 10:05
#   Describe      : 
#
# ====================================================*/
# include <stdio.h>

void three_numbers(float *, float *, float *);

int main(void)
{
	float num1;
	float num2;
	float num3;

	printf("Enter three numbers: ");
	while ((scanf("%f %f %f", &num1, &num2, &num3)) == 3)
	{
		three_numbers(&num1, &num2, &num3);
		printf("Minimum = %.2f; ", num1);
		printf("Middle = %.2f; ", num2);
		printf("Maximum = %.2f\n", num3);
		printf("Enter another three of numbers(q to quit.)\n");
	}
	printf("Done.\n");

	return 0;
}
void three_numbers(float * min, float * mid, float * max)
{
	float temp;

	if (*min > *mid)
	{
		temp = *min;
		*min = *mid;
		*mid = temp;
	}
	if (*min > *max)
	{
		temp = *min;
		*min = *max;
		*max = temp;
	}
	if (*mid > *max)
	{
		temp = *mid;
		*mid = *max;
		*max = temp;
	}
}
