/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-11-integers.c
#   Last Modified : 2024-03-24 18:42
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

const int SIZE = 8;

int main(void)
{
	int numbers[SIZE];
	int index;

	printf("Enter %d integers:\n", SIZE);
	for (index = 0; index < SIZE; index++)
	{
		scanf("%d", &numbers[index]);	
	}
	printf("Print out in reverse:\n");
	for (index = SIZE - 1; index >= 0; index--)
	{
		printf("%d ", numbers[index]);	
	}
	printf("\n");

	return 0;
}
