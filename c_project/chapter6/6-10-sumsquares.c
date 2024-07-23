/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-10-sumsquares.c
#   Last Modified : 2024-03-24 18:06
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int lower;
	int upper;
	int result;
	int sq;

	printf("Enter lower and upper integer limits: ");
	while (scanf("%d %d", &lower, &upper)  == 2 && (upper > lower))
	{
		sq = lower * lower;
		for (result = 0; lower <= upper; lower++)
		{
			result += lower * lower;
		}
		printf("The sums of squares from %d to %d is %d.\n", sq, upper * upper, result);
		printf("Enter next set of limits: ");
	}
	printf("Done\n");

	return 0;
}
