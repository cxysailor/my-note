/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-2-printdollar.c
#   Last Modified : 2024-03-24 11:24
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i + 1; j++)
			printf("$");
		printf("\n");
	}

	return 0;

}
