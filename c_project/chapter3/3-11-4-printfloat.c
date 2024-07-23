/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 3-11-4-printfloat.c
#   Last Modified : 2024-03-19 20:48
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	float number;

	printf("Enter a float-point value: ");
	scanf("%f", &number);
	printf("fixed-point notation: %f\n", number);
	printf("exponential notation: %e\n", number);
	printf("p notation: %a\n", number);

	return 0;
}
