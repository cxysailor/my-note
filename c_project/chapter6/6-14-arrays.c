/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-14-arrays.c
#   Last Modified : 2024-03-25 09:02
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define SIZE 8

int main(void)
{
	double array_a[SIZE];
	double array_b[SIZE];
	int index;
	double sums;

	printf("Enter 8 of float numbers:\n");
	for (index = 0, sums = 0; index < SIZE; index++)
	{
		scanf("%lf", &array_a[index]); /** 第1个数组读入8个数字 */
		sums += array_a[index]; /** 求第1个数组元素的累加和 */
		array_b[index] = sums; /** 将累加和依次赋值给第2个数组对应的元素 */
	}
	printf("The two arrays as below:\n");
	/** 打印第1个数组元素 */
	printf("Array 1: ");
	for (index = 0; index < SIZE; index++)
	{
		printf("%5.1lf ", array_a[index]);
	}
	printf("\n");
	/** 打印第2个数组元素 */
	printf("Array 2: ");
	for (index = 0; index < SIZE; index++)
	{
		printf("%5.1lf ", array_b[index]);
	}
	printf("\n");

	return 0;
}
