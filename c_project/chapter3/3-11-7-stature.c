/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 3-11-7-stature.c
#   Last Modified : 2024-03-19 22:31
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	float stature;
	float inch;

	printf("Enter stature in inch: ");
	scanf("%f", &inch);
	stature = inch * 2.54f;
	printf("Stature is %f in inch and is %f in centimeter\n", inch, stature);

	return 0;
}
