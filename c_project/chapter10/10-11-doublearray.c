/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-11-doublearray.c
#   Last Modified : 2024-05-13 21:53
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define ROW 3
# define COL 5

void copyarray(int tgt[][COL], int src[][COL], int n);
void display_2darray(int arr[][COL], int n);

int main(void)
{
	int source[ROW][COL] =
	{
		{8, 6, 9, 3, 1},
		{7, 8, 0, 6, 2},
		{3, 5, 9, 4, 6}
	};
	int target[ROW][COL] = {0};

	printf("Source Array:\n");
	display_2darray(source, ROW);
	printf("Tagert Array:\n");
	display_2darray(target, ROW);
	copyarray(target, source, ROW);
	printf("Target Array after being copyied:\n");
	display_2darray(target, ROW);

	return 0;
}
/** 将一个数组的元素拷贝到另一个数组 */
void copyarray(int tgt[][COL], int src[][COL], int n)
{
	int rs;
	int cs;

	for (rs = 0; rs < n; rs++)
		for (cs = 0; cs < COL; cs++)
			tgt[rs][cs] = src[rs][cs];
}
/** 显示数组元素 */
void display_2darray(int arr[][COL], int n)
{
	int rs; 
	int cs;

	for (rs = 0; rs < n; rs++)
	{
		for (cs = 0; cs < COL; cs++)
			printf("%-5d ", arr[rs][cs]);
		printf("\n");
	}
}
