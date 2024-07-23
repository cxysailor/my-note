/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-5-swapnumbers.c
#   Last Modified : 2024-05-03 22:49
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

float large_of(float *, float *);

int main(void)
{
	float num1;
	float num2;

	printf("Enter two numbers: ");
	while ((scanf("%f %f", &num1, &num2)) == 2)
	{
		printf("The maximum between %.2f and %.2f is %.2f\n", num1, num2, large_of(&num1, &num2));
		printf("Enter another pair of numbers(q to quit.)\n");
	}
	printf("Done.\n");

	return 0;
}
float large_of(float * ptr1, float * ptr2)
{
	return (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
}
