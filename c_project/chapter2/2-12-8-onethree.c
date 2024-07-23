/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 2-12-8-onethree.c
#   Last Modified : 2024-03-18 10:18
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}
