/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-6-reversearray.c
#   Last Modified : 2024-05-11 21:40
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define LEN 8

void reverse(double *src, int n);
void display(double *src, int n);

int main(void)
{
	double source[LEN] = {4.56, 8.78, 9.22, 10.56, 7.66, 8.88, 3.34, 2.56};
	int i;

	printf("Original array:\n");
	display(source, LEN);
	printf("Reversed array:\n");
	reverse(source, LEN);
	display(source, LEN);
	printf("Done.\n");

	return 0;
}
/** 将原数组倒序排列 */
void reverse(double *src, int n)
{
	int i;
	int j;
	double temp;

	/** 这个循环实现 */
	/** 第1个元素与最后一个元素对换,第2个元素与倒数第2个元素对换... */
	for (i = n - 1, j = 0; j < i; i--, j++)
	{
		temp = *(src + j);
		*(src + j) = *(src +i);
		*(src + i) = temp;
	}
}
/** 输出数组 */
void display(double *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%g ", *(src + i));
	putchar('\n');
}
