/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : x_y.c
#   Last Modified : 2024-03-18 07:57
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int x, y;

	x = 10;
	y = 5;
	y = x + y;
	x = x * y;
	printf("%d %d\n", x, y);
	return 0;
}
