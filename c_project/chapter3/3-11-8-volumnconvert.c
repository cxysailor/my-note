/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 3-11-8-volumnconvert.c
#   Last Modified : 2024-03-20 08:25
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	float cup;

	printf("Enter cup of water: ");
	scanf("%f", &cup);
	printf("cup = %.1f\npint = %.1f\nos = %.1f\ntable spoon = %.1f\ntea spoon = %.1f\n",
					cup, cup / 2, cup * 8, cup * 8 * 2, cup * 8 * 2 * 3);

	return 0;
}
