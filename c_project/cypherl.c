/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : cypherl.c
#   Last Modified : 2024-03-03 15:59
#   Describe      : 更改输入，保持空格不变
#
# ====================================================*/

# include <stdio.h>
# define SPACE ' '

int main(void)
{
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();
	}
	putchar(ch);

	return 0;
}
