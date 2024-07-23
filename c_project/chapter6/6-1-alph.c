/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-1-alph.c
#   Last Modified : 2024-03-24 11:11
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <string.h>

int main(void)
{
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int len;
	int index;

	len = strlen(alpha);
	for (index = 0; index < len; index++)
	{
		printf("%c ", alpha[index]);
	}
	printf("\n");

	return 0;
}
