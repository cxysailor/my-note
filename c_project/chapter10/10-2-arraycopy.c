/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-2-arraycopy.c
#   Last Modified : 2024-05-11 12:19
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define SIZE 5

void copy_arr(double tg1[], const double src[], int n);
void copy_ptr(double *tg2, const double *src, int n);
void copy_ptrs(double *tg3,const double *src, const double *n);
void display(const double *target, int n);

int main(void)
{
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[SIZE];
	double target2[SIZE];
	double target3[SIZE];

	printf("Source array:\n");
	display(source, SIZE);

	copy_arr(target1, source, SIZE);
	printf("Tagert 1:\n");
	display(target1, SIZE);
	
	copy_ptr(target2, source, SIZE);
	printf("Tagert 2:\n");
	display(target2, SIZE);

	copy_ptrs(target3, source, source + SIZE);
	printf("Tagert 3:\n");
	display(target3, SIZE);

	return 0;
}
/** 第1份拷贝函数 */
void copy_arr(double tg1[], const double src[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		tg1[i] = src[i];
}
/** 第2份拷贝函数 */
void copy_ptr(double *tg2, const double *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(tg2 + i) = *(src + i);
}
/** 第3份拷贝函数 */
void copy_ptrs(double *tg3, const double *src, const double *n)
{
	int i;

	for (i = 0; i < n - src; i++)
		*(tg3 + i) = *(src + i);
}
/** 输出显示数组元素 */
void display(const double *target, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%-5g", *(target + i));
	printf("\n");
}
