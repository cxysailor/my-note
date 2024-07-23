/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-13-squares.c
#   Last Modified : 2024-03-24 23:22
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	const int SIZE = 8;
	int numbers[SIZE];
	int num = 2;
	int n = 1;
	int i;

	for (i = 0; i < SIZE; i++)
	{
		n *= num;
		numbers[i] = n;	
	}

	i = 0;
	do {
		printf("%d ", numbers[i]);
		i++;
	} while (i < SIZE);
	printf("\n");

	return 0;
}
