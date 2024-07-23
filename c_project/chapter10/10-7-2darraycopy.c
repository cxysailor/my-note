/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-7-2darraycopy.c
#   Last Modified : 2024-05-11 23:32
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define ROW 3
# define COL 5

void copy_arr(double tg1[], const double src[], int n);
void display(double (*target)[COL], int n);

int main(void)
{
	int i;
	double source[ROW][COL] =
	{
		{5.18, 2.32, 13.3, 4.94, 5.56},
		{3.21, 6.57, 9.88, 2.55, 1.23},
		{10.22, 18.35, 8.67, 0.11, 7.87}
	};
	double target[ROW][COL] = {0.0};

	printf("Source array:\n");
	display(source, ROW);
	printf("Target array before copying:\n");
	display(target, ROW);
	for (i = 0; i < ROW; i++)
		copy_arr(target[i], source[i], COL);
	printf("Target array after copied:\n");
	display(target, ROW);

	return 0;
}
/** 拷贝函数 */
void copy_arr(double tg[], const double src[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		tg[i] = src[i];
}
/** 输出显示数组元素 */
void display(double (*target)[COL], int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COL; j++)
			/** printf("%-5g ", *(*target + i) + j); */
			printf("%-5g ", target[i][j]);
		printf("\n");
	}
}
