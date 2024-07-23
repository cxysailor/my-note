/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-5-piramid.c
#   Last Modified : 2024-03-24 14:56
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int space;
	char lets;
	char letter;

	printf("Enter a letter: ");
	scanf("%c", &lets);
	letter = lets; /** 将输入的字母保存,以便再次初始化为原来的值 */
	for (i = 0; i < 5; i++)
	{
		/** 处理空格的输出 - 外层循环第1次循环打印4个空格,第2次循环打印3个空格... */
		for (space = 4 - i; space > 0; space--)
		{
			printf("%c", ' ');
		}
		/** 以升序打印字母 - 中线及中线左侧的字母输出(包括中线上的字母) */
		for (j = 0; j < i + 1; lets++, j++)
		{
			printf("%c", lets - 4);
		}
		/** 以降序打印字母 - 中线右侧的字母输出(不包括中线上的字母) */
		for (k = 0, lets = letter; k < i; lets--, k++)
		{
			printf("%c", lets - 5 + i);
		}
		printf("\n");
		lets = letter; /** 将lets恢复为原始输入的字母 */
	}

	return 0;
}
