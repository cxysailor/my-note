/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-3-letters.c
#   Last Modified : 2024-03-24 12:19
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int i;
	int j;
	int lets;

	for (i = 0; i < 6; i++)
	{
		for (j = 0, lets = 70; j < i + 1; j++, lets--)
		{
			printf("%c", lets);
		}
		printf("\n");
	}

	return 0;
}
