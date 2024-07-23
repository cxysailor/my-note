/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-8-cppartarray.c
#   Last Modified : 2024-05-13 10:59
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define LEN 7
# define N 3

void copy_ptr(double *tgt, const double *src, int n);
void display(const double *target, int n);

int main(void)
{
	double target[N] = {0.0};
	double source[LEN] = {4.5, 8.9, 1.2, 3.5, 0.8, 9.2, 8.6};

	/** 显示源数组 */
	printf("Source Array:\n");
	display(source, LEN);
	/** 显示复制前的目标数组 */
	printf("Tagert Array:\n");
	display(target, N);
	/** 复制源数组中第2-第5个元素到目标中 */
	/** 传递的源数组中第2个元素的地址和要复制的元素个数 */
	copy_ptr(target, &source[2], N);
	/** 显示复制后的目标数组 */
	printf("Tagert Array after copying:\n");
	display(target, N);

	return 0;
}
/** 第2份拷贝函数 */
void copy_ptr(double *tgt, const double *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(tgt + i) = *(src + i);
}
/** 输出显示数组元素 */
void display(const double *target, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%-5g", *(target + i));
	printf("\n");
}
