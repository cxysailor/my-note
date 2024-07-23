/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-10-tax.c
#   Last Modified : 2024-03-30 16:18
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <stdlib.h>

const double TR1 = 0.15f; /** 基本税率 */
const double TR2 = 0.28f; /** 超出部分税率 */
const double sg = 17850.0f; /** 单身基本应税额 */
const double hh = 23900.0f; /** 户住基本应税额 */
const double ms = 29750.0f; /** 已婚共有基本应税额 */
const double md = 14875.0f; /** 已婚离异基本应税额 */

int main(void)
{
	int choice; /** 选择菜单 */
	double income; /** 总收入 */
	double tax; /** 税金 */
	double base; /** 用于保存4种类别的基本应税额 */

	/** 显示选择菜单 */
	printf("Make a choice of the menu:\n");
	printf("************************************************************\n");
	printf("1) Single          |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", sg, TR1 * 100.0, TR2 * 100.0);
	printf("2) Householder     |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", hh, TR1 * 100.0, TR2 * 100.0);
	printf("3) Married,share   |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", ms, TR1 * 100.0, TR2 * 100.0);
	printf("4) Married,splitup |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", md, TR1 * 100.0, TR2 * 100.0);
	printf("5) quit\n");
	printf("************************************************************\n");
	while (scanf("%d", &choice) == 1)
	{
		/** 选择一个类别 */
		switch (choice)
		{
			case 1:
				printf("Your choice is: Single: %6.1lf at %.0lf%%, excess at %.0lf%%\n", sg, TR1*100.0, TR2*100.0);
				base = sg; /** 将单身的基本应税额赋给base */
				break;
			case 2:
				printf("Your choice is: Householder: %6.1lf at %.0lf%%, excess at %.0lf%%\n", hh, TR1*100.0, TR2*100.0);
				base = hh; /** 将户主的基本应税额赋给base */
				break;
			case 3:
				printf("Your choice is: Married,share: %6.1lf at %.0lf%%, excess at %.0lf%%\n", ms, TR1*100.0, TR2*100.0);
				base = ms; /** 将已婚,共有的基本应税额赋给base */
				break;
			case 4:
				printf("Your choice is: Married,splitup: %6.1lf at %.0lf%%, excess at %.0lf%%\n", md, TR1*100.0, TR2*100.0);
				base = md; /** 将已婚,离异的基本应税额赋给base */
				break;
			case 5:
				printf("Done.\n");
				exit(EXIT_SUCCESS);
			default:
				printf("Please input the number (1 - 5):\n");
				continue;
		}
		/** 输入总收入 */
		printf("Enter income: ");
		scanf("%lf", &income);
		/** 计算税金 */
		if (income <= base)
			tax = income * TR1;
		else
			tax = base * TR1 + (income - base) * TR2;
		/** 输出结果 */
		printf("Total tax shall pay $%.2lf.\n", tax);
		/** 显示选择菜单 */
		printf("Make a choice of the menu:\n");
		printf("************************************************************\n");
		printf("1) Single          |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", sg, TR1 * 100.0, TR2 * 100.0);
		printf("2) Householder     |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", hh, TR1 * 100.0, TR2 * 100.0);
		printf("3) Married,share   |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", ms, TR1 * 100.0, TR2 * 100.0);
		printf("4) Married,splitup |$%6.1lf at %.0lf%%, excess at %.0lf%%\n", md, TR1 * 100.0, TR2 * 100.0);
		printf("5) quit\n");
		printf("************************************************************\n");
	}

	return 0;

}
