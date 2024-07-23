/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-3-printnumber.c
#   Last Modified : 2024-03-20 22:24
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	float num;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	printf("The input is %.1f or %.1e\n", num, num);
	printf("The input is %+.3f or %4.3E\n", num, num);

	return 0;
}
