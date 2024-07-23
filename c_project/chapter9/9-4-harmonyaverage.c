/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-4-harmonyaverage.c
#   Last Modified : 2024-05-02 23:26
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

float harmonic_mean(float, float);

int main(void)
{
	float num1;
	float num2;

	printf("Enter two numbers: ");
	while ((scanf("%f %f", &num1, &num2)) == 2)
	{
		/** 判断两数之和是否为0 */
		if (num1 + num2 != 0)
			printf("The harmonic mean of %.2f and %.2f is: %.2f\n", num1, num2, harmonic_mean(num1, num2));
		/** 若为0,则提示重新输入 */
		else
		{
			/** 除数为0 */
			printf("[%.2f] + [%.2f] = %.2f,divisor is 0.\n", num1, num2, (num1 + num2));
			printf("Try another pair of numbers: ");
			continue;
		}
		/** 提示输入另外一对数字 */
		printf("Enter another pair of nubmers(q to quit): ");
	}
	printf("Done.\n");

	return 0;
}
float harmonic_mean(float x, float y)
{
	/** 计算调和平均数 */
	return (2 * x * y) / (x + y);
}
