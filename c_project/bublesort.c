/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : bublesort.c
#   Last Modified : 2024-02-08 23:22
#   Describe      : 冒泡排序
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int src[] = {4, 2, 3, 5, 1, 9, 8, 6, 0, 7};
	int i, j;
	int size;
	int temp = 0;
	size = sizeof(src) / sizeof(src[0]);

	for (i = 0; i < size; i++)
		for (j = 0; j < size - i - 1; j++)
			if (src[j] > src[j + 1])
			{
				temp = src[j + 1];
				src[j + 1] = src[j];
				src[j] = temp;
			}
	for (i = 0; i < size; i++)
		printf("%d ", src[i]);
	printf("\n");

	return 0;
}
