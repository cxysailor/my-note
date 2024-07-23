/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-7-cubic.c
#   Last Modified : 2024-03-23 16:31
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void cubics(int num);

int main(void)
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);
	cubics(number);

	return 0;
}

void cubics(int num)
{
	printf("%d cubic = %d\n", num, num * num * num);
}
