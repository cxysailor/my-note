/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-6-numbers.c
#   Last Modified : 2024-03-24 15:26
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int lower;
	int upper;

	printf("Enter the lower and upper limits: ");
	scanf("%d %d", &lower, &upper);
	for (;lower < upper; lower++)
	{
		printf("%d %8d %12d\n", lower, lower * lower, lower * lower * lower);
	}
	printf("Done.\n");
	
	return 0;
}
