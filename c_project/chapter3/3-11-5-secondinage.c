/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 3-11-5-secondinage.c
#   Last Modified : 2024-03-19 21:37
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define SEC_PER_YEAR 3.156e7f

int main(void)
{
	int age;
	unsigned long long seconds;

	printf("Enter your age please: ");
	scanf("%d", &age);
	seconds = age * SEC_PER_YEAR;
	printf("Total %Lu seconds in your age of %d\n", seconds, age);

	return 0;
}
