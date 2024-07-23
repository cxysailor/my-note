/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : a_b.c
#   Last Modified : 2024-03-18 07:39
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int a, b;

	a = 5;
	b = 2;
	b = a;
	a = b;
	printf("%d %d\n", b, a);
	return 0;
}
