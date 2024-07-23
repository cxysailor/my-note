/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-4-charconvert.c
#   Last Modified : 2024-03-29 09:37
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define STOP '.'

int main(void)
{
	int count = 0;
	char ch;

	printf("Enter some characters (# to stop):\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '!')
		{
			putchar(ch);
			count++;
		}
		else if (ch == STOP)
		{
			ch = '!';
			count++;
		}
		putchar(ch);
	}
	printf("\n");
	printf("There are %d of characters subsitituded.\n", count);

	return 0;
}
