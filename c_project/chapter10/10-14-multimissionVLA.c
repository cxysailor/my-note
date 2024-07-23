/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-14-multimissionVLA.c
#   Last Modified : 2024-05-14 13:24
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define ROW 3
# define COL 5

void getvals(int, int, float array[*][*]);
float average_row(int rows, int cols, const float array[rows][cols]);
float average_all(int, int, const float array[*][*]);
float maximumv(int rows, int cols, const float array[rows][cols]);
void display(int rows, int cols, const float array[rows][cols]);

int main(void)
{
	int i;
	float arr[ROW][COL];

	printf("Enter some float numbers (q to quit):\n");
	/** 给数组赋值-传递的是一维数组,即每一行 */
	for (i = 0; i < ROW; i++)
		getvals(i, COL, arr);
	printf("The original array:\n");
	display(ROW, COL, arr);
	/** 计算每一行的平均值-传递的一维数组,即每一行 */
	printf("\n");
	for (i = 0; i < ROW; i++)
		printf("Average Row %d: %.2f\n", i + 1, average_row(i, COL, arr) / COL);
	printf("\nAverage for all values: %.2f\n", average_all(ROW, COL, arr) / (ROW * COL));
	printf("\nMaximum is: %.2f\n", maximumv(ROW, COL, arr));

	return 0;
}
/** 功能a - 把用户输入的数据存储在3x5的数组中。这个函数处理的是一维数组 */
void getvals(int rows, int cols, float array[rows][cols])
{
	int cs = 0;
	float val;

	while ((cs < cols) && (scanf("%f", &val) == 1))
	{
		array[rows][cs] = val;
		cs++;
	}
}
/** 功能b - 计算每一行的平均值 - 处理的是一维数组 */
float average_row(int rows, int cols, const float array[rows][cols])
{
	int rs;
	int cs;
	float subtot;

	for (rs = rows, cs = 0; cs < cols; cs++)
		subtot += array[rs][cs];

	return subtot;
}
/** 功能c - 计算所有数据的平均值 - 处理的是二维数组 */
float average_all(int rows, int cols, const float array[rows][cols])
{
	int rs;
	int cs;
	float total;

	for (rs = 0; rs < rows; rs++)
		for (cs = 0; cs < cols; cs++)
			total += array[rs][cs];

	return total;
}
/** 功能d - 求最大值 - 处理的是二维数组 */
float maximumv(int rows, int cols, const float array[rows][cols])
{
	int rs;
	int cs;
	float maxv = array[0][0];

	for (rs = 0; rs < rows; rs++)
		for (cs = 0; cs < cols; cs++)
			maxv = (maxv > array[rs][cs]) ? maxv : array[rs][cs];

	return maxv;
}
/** 显示数组元素 */
void display(int rows, int cols, const float array[rows][cols])
{
	int rs;
	int cs;

	for (rs = 0; rs < rows; rs++)
	{
		for (cs = 0; cs < cols; cs++)
			printf("%-5.2f ", array[rs][cs]);
		printf("\n");
	}
}
