/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-6-doubleearning.c
#   Last Modified : 2024-03-23 16:20
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int days;
	int count = 0;
	int sum = 0;

	printf("Enter working days: ");
	scanf("%d", &days);
	while (count++ < days)
		sum += count * count;	
	printf("Total earned $%d in %d days.\n", sum, days);

	return 0;
}
