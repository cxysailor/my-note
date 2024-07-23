/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-4-maxindex.c
#   Last Modified : 2024-05-11 19:51
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define LEN 5

int maximum(double source[], int n);

int main(void)
{
	double arr[LEN] = {3.3, 2.5, 9.8, 14.1, 5.3};

	printf("Index of maximun in array: %d\n", maximum(arr, LEN));

	return 0;
}
/** 判断数组中的最大数字 - 两两比较(冒泡排序) */
int maximum(double source[], int n)
{
	int i;
	/** int flag; */
	double maxv;

	/** 找出数组中最大值的下标 */
	printf("Source array:\n");
	for (i = 0, maxv = source[0]; i < n; i++)
	{
		printf("%-5g ", source[i]);
		maxv = (maxv > source[i + 1]) ? maxv : source[i + 1]; 
	}
	printf("\n");
	/** 找出最大值对应的下标(从0开始) */
	for (i = 0; i < n; i++)
		if (maxv == source[i])
			break;

	return i;
}
