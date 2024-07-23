/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-9-arrayVLA.c
#   Last Modified : 2024-05-13 21:18
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define ROW 3
# define COL 5

void copyarray(int rows, int cols, double tgt[rows][cols], double src[rows][cols]);
void display_2darray(int, int, double arr[*][*]);

int main(void)
{
	double source[ROW][COL] =
	{
		{0.88, 3.56, 2.89, 9.08, 5.21},
		{8.92, 6.78, 0.32, 4.56, 5.32},
		{1.23, 0.85, 7.69, 2.34, 7.89}
	};
	double target[ROW][COL] = {0.0};

	printf("Source Array:\n");
	display_2darray(ROW, COL, source);
	printf("Tagert Array:\n");
	display_2darray(ROW, COL, target);
	copyarray(ROW, COL, target, source);
	printf("Target Array after being copyied:\n");
	display_2darray(ROW, COL, target);

	return 0;
}
/** 使用变长数组将一个数组的元素拷贝到另一个数组 */
void copyarray(int rows, int cols, double tgt[rows][cols], double src[rows][cols])
{
	int rs;
	int cs;

	for (rs = 0; rs < rows; rs++)
		for (cs = 0; cs < cols; cs++)
			tgt[rs][cs] = src[rs][cs];
}
/** 显示数组元素 */
void display_2darray(int rows, int cols, double arr[rows][cols])
{
	int rs; 
	int cs;

	for (rs = 0; rs < rows; rs++)
	{
		for (cs = 0; cs < cols; cs++)
			printf("%-5g ", arr[rs][cs]);
		printf("\n");
	}
}
