/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-13-multimission.c
#   Last Modified : 2024-05-14 11:38
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define ROW 3
# define COL 5

void getvals(float array[], int n);
float average_row(const float array[], int n);
float average_all(const float array[][COL], int n);
float maximumv(const float array[][COL], int n);
void display(const float array[][COL], int n);

int main(void)
{
	int i = 0;
	float arr[ROW][COL];

	printf("Enter some float numbers (q to quit):\n");
	/** 给数组赋值-传递的是一维数组,即每一行 */
	for (i = 0; i < ROW; i++)
		getvals(arr[i], COL);
	printf("The original array:\n");
	display(arr, ROW);
	/** 计算每一行的平均值-传递的一维数组,即每一行 */
	printf("\n");
	for (i = 0; i < ROW; i++)
		printf("Average Row %d: %.2f\n", i + 1, average_row(arr[i], COL) / COL);
	printf("\nAverage for all values: %.2f\n", average_all(arr, ROW) / (ROW * COL));
	printf("\nMaximum is: %.2f\n", maximumv(arr, ROW));

	return 0;
}
/** 功能a - 把用户输入的数据存储在3x5的数组中。这个函数处理的是一维数组 */
void getvals(float array[], int n)
{
	int rs = 0;
	float val;

	while ((rs < n) && (scanf("%f", &val) == 1))
	{
		array[rs] = val;
		rs++;
	}
}
/** 功能b - 计算每一行的平均值 - 处理的是一维数组 */
float average_row(const float array[], int n)
{
	int i;
	float subtot;

	for (i = 0, subtot = 0; i < n; i++)
		subtot += array[i];

	return subtot;
}
/** 功能c - 计算所有数据的平均值 - 处理的是二维数组 */
float average_all(const float array[][COL], int n)
{
	int rs;
	int cs;
	float total;

	for (rs = 0; rs < n; rs++)
		for (cs = 0; cs < COL; cs++)
			total += array[rs][cs];

	return total;
}
/** 功能d - 求最大值 - 处理的是二维数组 */
float maximumv(const float array[][COL], int n)
{
	int rs;
	int cs;
	float maxv = array[0][0];

	for (rs = 0; rs < n; rs++)
		for (cs = 0; cs < COL; cs++)
			maxv = (maxv > array[rs][cs]) ? maxv : array[rs][cs];

	return maxv;
}
/** 显示数组元素 */
void display(const float array[][COL], int n)
{
	int rs;
	int cs;

	for (rs = 0; rs < n; rs++)
	{
		for (cs = 0; cs < COL; cs++)
			printf("%-5.2f ", array[rs][cs]);
		printf("\n");
	}
}
