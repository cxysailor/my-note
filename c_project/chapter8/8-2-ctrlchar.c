/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-2-ctrlchar.c
#   Last Modified : 2024-04-04 14:12
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		{
			putchar('\\');
			putchar('n');
			printf(":%d ", ch);
		}
		else if (ch == '\t')
		{
			putchar('\\');
			putchar('t');
			printf(":%d ", ch);
		}
		else if (ch < ' ')
		{
			putchar('^');
			putchar(ch + 64);
			printf(":%d ", ch);
		}
		else
		{
			putchar(ch);
			printf(":%d ", ch);
		}
		if (++count % 10 == 0)
			putchar('\n');
	}


	return 0;
}
