/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-16-investor.c
#   Last Modified : 2024-03-25 16:04
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	const double si = 0.1; /** 单利率 */
	const double ci = 0.05; /** 复利率 */
	const double investment = 100.0; /** 投资的初始金额 */
	double daphne = 100.0; /** Daphne的初始投资金额 */
	double deirdre = 100.0; /** Deirdre的初始投资金额 */
	int years; /**  投资年数 */

	for (years = 0; daphne >= deirdre; years++)
	{
		daphne += investment * si; /** 单利计算 - 将每年的利息加到初始本金中 */
		deirdre *= (1 + ci); /** 复利计算 - 使用循环实现指数幂，然后与初始本金累乘 */
	}
	printf("After being invested %d years,Deirdre's investment exceeded Daphne's.\nDaphne = $%.2lf; Deirdre = $%.2lf.\n", years, daphne, deirdre);

	return 0;
}
