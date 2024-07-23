/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : exc9.c
#   Last Modified : 2024-03-25 10:23
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int m, n;

	n = 30;
	while (++n <= 33)
	{
		printf("%d|", n);
	}

	n = 30;
	do
	{
		printf("%d|", n);	
	} while (++n <= 33);

	printf("\n***\n");

	for (n = 1; n*n < 200; n += 4)
	{
		printf("%d\n", n);
	}

	for (n = 2, m = 6; n < m; n *= 2, m += 2)
	{
		printf("%d %d\n", n, m);
	}

	printf("\n***\n");

	for (n = 5; n > 0; n--)
	{
		for (m = 0; m <= n; m++)
			printf("=");
		printf("\n");
	}

	return 0;
}
