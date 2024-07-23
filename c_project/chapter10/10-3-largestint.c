/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-3-largestint.c
#   Last Modified : 2024-05-27 21:58
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define LEN 5

int maximum(int source[], int n);

int main(void)
{
	int arr[LEN] = {3, 2, 9, 4, 5};

	printf("Maximun in array: %d\n", maximum(arr, LEN));

	return 0;
}
/** 判断数组中的最大数字 - 两两比较(冒泡排序) */
int maximum(int source[], int n)
{
	int i;
	int maxv;

	for (i = 0, maxv = source[0]; i < n; i++)
		maxv = 	(maxv > source[i + 1]) ? maxv : source[i + 1]; 

	return maxv;
}
