/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : exc14.c
#   Last Modified : 2024-03-24 10:11
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int k;

	for (k = 1, printf("%d: Hi!\n",k); printf("k = %d\n", k), 
		k * k < 26; k += 2, printf("Now k is %d\n", k))
			printf("k is %d in the loop\n", k);

	return 0;
}
