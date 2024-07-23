/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-3-numcal.c
#   Last Modified : 2024-03-27 17:59
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int ch;
	int e_count = 0; /** 偶数的个数 */
	int o_count = 0; /** 奇数的个数 */
	int e_sum = 0; /** 偶数的累积和 */
	int o_sum = 0; /** 奇数的累积和 */

	printf("Enter some integer numbers:\n");
	while (scanf("%d", &ch) == 1 && ch != 0)
	{
		if (ch % 2 == 0)
		{
			e_count++;
			e_sum += ch;
		}
		else
		{
			o_count++;
			o_sum += ch;
		}
	}
	printf("There are total %d numbers input,with:\n", e_count + o_count);
	printf("%d even numbers, its average is %d.\n", e_count, e_sum / e_count);
	printf("%d odd numbers, its average is %d.\n", o_count, o_sum / o_count);

	return 0;
}
