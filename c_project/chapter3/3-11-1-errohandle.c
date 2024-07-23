/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 3-11-1-errohandle.c
#   Last Modified : 2024-03-19 20:18
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int i = 2147483647;
	unsigned int j = 65535;
	unsigned long l = 4294967295;
	float toobig = 3.4e38;
	float toosmall = 0.1234e-10;

	printf("i = %d; i+1 = %d; i+2 = %d\n", i, i + 1, i + 2);
	printf("j = %d; j+1 = %d; j+2 = %d\n", j, j + 1, j + 2);
	printf("l = %u; l+1 = %u; l+2 = %u\n", l, l + 1, l + 2);
	printf("toobig = %e; toobig+1 = %e; toobig+2 = %e\n", toobig, toobig + 1.0, toobig + 2.0);
	printf("toobig * 100.0 = %e\n", toobig * 100.0f);
	printf("toosmall = %e; toosmall / 10 = %e\n", toosmall, toosmall / 10);

	return 0;
}
