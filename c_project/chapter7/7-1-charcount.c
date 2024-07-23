/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-1-charcount.c
#   Last Modified : 2024-03-27 12:46
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	char ch;
	int charcount = 0;

	printf("Enter some characters (# to stop.):\n");
	while ((ch = getchar()) != '#')
	{
		charcount++;
	}
	printf("There are %d characters.\n", charcount);

	return 0;
}
