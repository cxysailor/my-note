/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-17-bonus.c
#   Last Modified : 2024-03-25 16:57
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	const double INST = 0.08; /** 年利率 */
	const double DRAW = 100000.0; /** 每年取出的金额 */
	double bonus = 1000000.0; /** 原始金额 */
	int year = 0;

	while (bonus >= 0)
	{
		year++;
		/** printf("years=%d; capital=%.2lf; dif=%.2lf; interst=%.2lf.\n", year, bonus, bonus * INST - DRAW, bonus * INST); */
		bonus += (bonus * INST - DRAW);
	}
	printf("Chuckie will take out the money in %d years.\n", year);

	return 0;
}

