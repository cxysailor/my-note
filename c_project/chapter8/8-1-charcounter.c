/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-1-charcounter.c
#   Last Modified : 2024-04-03 09:51
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
#include <wchar.h>

int main(void)
{
	int ch;
	int count;

	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n') /** 不统计最后输入的换行符'\n';若不做这个判断,则统计 */
			count++;
		putchar(ch);
	}
	printf("Total %d characters input.\n", count);

	return 0;
}
