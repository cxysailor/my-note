/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-2-chartoint.c
#   Last Modified : 2024-03-27 15:04
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	char ch;
	int count;

	printf("Enter some text:\n");
	while ((ch = getchar()) != '#')
	{
		count++;
		printf("%4c->%3d ", ch, ch);
		if (count % 8 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}
