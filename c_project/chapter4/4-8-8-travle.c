/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-8-travle.c
#   Last Modified : 2024-03-23 09:42
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define KM_MILE 1.609f /** 1英里等于1.609公里 */

int main(void)
{
	const float L_PER_G = 3.785f;  /** 1加仑等于3.785升 */
	float dist;
	float consum;

	printf("Enter the miles: ");
	scanf("%f", &dist);
	printf("Enter the consumption: ");
	scanf("%f", &consum);
	/** 显示美国的标准:每消耗1加仑燃料行驶的英里数 */
	printf("The American standard is %.1f Mile/gallon.\n", dist / consum);
	/** 显示欧洲的标准:每行驶100公里所消耗的燃料 */
	printf("The European standard is %.1f L/100km.\n", (consum * L_PER_G) / (dist * KM_MILE) * 100);

	return 0;
}
