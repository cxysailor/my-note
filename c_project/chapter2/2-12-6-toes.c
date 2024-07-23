/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 2-12-6-toes.c
#   Last Modified : 2024-03-18 09:55
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int toes = 10;

	printf("toes = %d\n", toes);
	printf("two times of toes = %d\n", toes * 2);
	printf("square of toes = %d\n", (toes * toes));
/** ===============或者写在一行内,分3行输出============== */
	printf("toes = %d\ntwo times of toes = %d\nsquare of toes = %d\n", toes, toes * 2, toes * toes);
/** ===============或者写在一行内,1行输出============== */
	printf("toes = %d; two times of toes = %d; square of toes = %d\n", toes, toes * 2, toes * toes);
	return 0;
}
