/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-7-updatesalary.c
#   Last Modified : 2024-04-21 23:30
#   Describe      : 
#
# ====================================================*/

# include <ctype.h>
# include <stdio.h>
# define BH 40.0f /** 基本工作时间40小时 */
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
	double salary_rate; /** 工资费率 */
	double tax = 0; /** 税金 */
	double base_salary = 0; /** 基本工资-即40小时的工资 */
	const double SR1 = 8.75f; /** 第1档工资费率 */
	const double SR2 = 9.33f; /** 第2档工资费率 */
	const double SR3 = 10.00f; /** 第3档工资费率 */
	const double SR4 = 11.20f; /** 第4档工资费率 */
	char ch;

	printf("Enter the number corresponding the desired pay rate or action:\n");
	printf("**************************************************************\n");
	printf("a) $%2.2lf/hr                   b) $%2.2lf/hr\n", SR1, SR2);
	printf("c) $%2.2lf/hr                  d) $%2.2lf/hr\n", SR3, SR4);
	printf("q) quit\n");
	printf("**************************************************************\n");
	printf("Choose the menu: ");
	while ((ch = getchar()) != 'q')
	{
		if (ch == '\n')
			continue;
		if (isupper(ch))
			ch = tolower(ch);
		switch (ch)
		{
			case 'a':
				salary_rate = SR1;
				break;
			case 'b':
				salary_rate = SR2;
				break;
			case 'c':
				salary_rate = SR3;
				break;
			case 'd':
				salary_rate = SR4;
				break;
		}
		/** 保留输入的首字母 */
		while (getchar() != '\n')
			continue;
		if (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q')
		{
			printf("Sorry, I can recognize only (a,b,c,d or q):");
			continue;
		}
		base_salary = BH * salary_rate;
		printf("Enter working hours for one week: ");
		scanf("%lf", &hours);
		/** 计算工资总额 */
		if (hours <= BH)
			income = hours * salary_rate;
		else
			income = base_salary + (hours - BH) * salary_rate * OT;
		/** 计算税金 */
		if (income <= AMT1)
			tax = income * TR1;
		else if (income > AMT1 && income <= AMT2)
			tax = TAX1 + (income - AMT1) * TR2;
		else
			tax = TAX1 + TAX2 + (income - AMT2) * TR3;
		/** 计算净收入 */
		salary = income - tax;
		/** 输出计算结果 */
		printf("\n");
		printf("The result:\n");
		printf("--------------------------------------------------------------\n");
		printf("income = $%.2lf; tax = $%.2lf; salary = $%.2lf.\n", income, tax, salary);
		printf("--------------------------------------------------------------\n");
		printf("\n");
		/** 再次选择菜单，进行新一轮计算 */
		printf("Enter the number corresponding the desired pay rate or action:\n");
		printf("**************************************************************\n");
		printf("a) $%2.2lf/hr                   b) $%2.2lf/hr\n", SR1, SR2);
		printf("c) $%2.2lf/hr                  d) $%2.2lf/hr\n", SR3, SR4);
		printf("q) quit\n");
		printf("**************************************************************\n");
		printf("Choose the menu: ");
	}
	printf("Done.\n");

	return 0;
}
