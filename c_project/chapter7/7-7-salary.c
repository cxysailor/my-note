/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-7-salary.c
#   Last Modified : 2024-03-29 16:20
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define BR 10.0f /** 基本工资费率10.0元/小时 */
# define BH 40.0f /** 基本工作时间40小时 */
# define BS (BH * BR) /** 基本工资,即40小时的工资 */
# define OT 1.5f /** 加班费率1.5的加班时间 */
# define TR1 0.15f /** 第1档税率 */
# define TR2 0.20f /** 第2档税率 */
# define TR3 0.25f /** 第3档税率 */
# define TAX1 (300.0 * TR1) /** 第1档税金 */
# define TAX2 (150.0 * TR2) /** 第2档税金 */
# define AMT1 300.0f /** 第1档应税额 */
# define AMT2 (AMT1 + 150.0) /** 第2档应税额 */

int main(void)
{
	double hours; /** 工作时间-1周的工作小时数 */
	double income = 0; /** 工资总额 */
	double salary = 0; /** 净收入 */
	double tax = 0; /** 税金 */

	printf("Enter working hours for one week: ");
	scanf("%lf", &hours);
	/** 计算工资总额 */
	if (hours <= BH)
		income = hours * BR;
	else
		income = BS + (hours - BH) * BR * OT;
	/** 计算税金 */
	if (income <= AMT1)
		tax = income * TR1;
	else if (income > AMT1 && income <= AMT2)
		tax = TAX1 + (income - AMT1) * TR2;
	else
		tax = TAX1 + TAX2 + (income - AMT2) * TR3;
	/** 计算净收入 */
	salary = income - tax;
	printf("income = %.2lf; tax = %.2lf; salary = %.2lf.\n", income, tax, salary);

	return 0;
}
