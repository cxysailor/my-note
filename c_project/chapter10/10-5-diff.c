/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-5-diff.c
#   Last Modified : 2024-05-27 19:55
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define LEN 5

double maximum(double source[], int n);

int main(void)
{
	double arr[LEN] = {3.3, 2.5, 9.8, 14.1, 5.3};

	printf("[Maximun - Minimum = %g]\n", maximum(arr, LEN));

	return 0;
}
/** 判断数组中的最大数字和最小数字 - 两两比较 */
double maximum(double source[], int n)
{
	int i;
	double maxv;
	double minv;

	/** 找出数组中的最大值和最小值 */
	printf("Source array:\n");
	for (i = 0, maxv = source[0], minv = source[i]; i < n; i++)
	{
		/** 输出原数组 */
		printf("%-5g ", source[i]);
		/** 最大值 */
		maxv = (maxv > source[i + 1]) ? maxv : source[i + 1]; 
		/** 最小值 */
		minv = (minv < source[i]) ? minv : source[i]; 
	}
	printf("\n");

	return maxv - minv;
}
