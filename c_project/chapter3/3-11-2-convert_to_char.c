/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 3-11-2-convert_to_char.c
#   Last Modified : 2024-03-19 20:22
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int ch;

	printf("Enter an ASCII number:\n");
	scanf("%d", &ch);
	printf("Your enter: %d; convert to char: %c\n", ch, ch);

	return 0;
}
