/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-4-heightname.c
#   Last Modified : 2024-03-20 21:05
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	float height;
	char name[40];

	printf("Enter your name and stature(in inch): ");
	scanf("%s %f", name, &height);
	printf("%s, you are %.3f feet tall.\n", name, height / 12.0);

	return 0;
}
