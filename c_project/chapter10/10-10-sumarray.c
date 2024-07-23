/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-10-sumarray.c
#   Last Modified : 2024-07-23 03:59
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define LEN 4

void sum_copy(double src1[], double src2[], double tgt[], int n);
void display(double source[], int n);

int main(void)
{
	double source1[LEN] = {2, 4, 5, 8};
	double source2[LEN] = {1, 0, 4, 6};
	double target[LEN] = {0.0};

	printf("Source Array 1:\n");
	display(source1, LEN);
	printf("Source Array 2:\n");
	display(source2, LEN);
	printf("Target Array:\n");
	display(target, LEN);
	sum_copy(source1, source2, target, LEN);
	printf("Target Array after being copied:\n");
	display(target, LEN);

	return 0;
	
}
/** 将两个数组中对应的元素相加，并将和赋给目标数组 */
void sum_copy(double src1[], double src2[], double tgt[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		tgt[i] = src1[i] + src2[i];
}
void display(double source[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%-5g ", source[i]);
	printf("\n");
}
