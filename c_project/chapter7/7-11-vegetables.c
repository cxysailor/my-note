/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-11-vegetables.c
#   Last Modified : 2024-04-04 09:21
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <ctype.h>

int main(void)
{
	const double pa = 2.05f; /** price of artichoke */
	const double pb = 1.15f; /** price of beet */
	const double pc = 1.09f; /** price of carrot */
	const double pf1 = 6.50f; /** packing and freight level 1 */
	const double pf2 = 14.0f; /** packing and freight level 2 */
	const double disc = 0.05f; /** discount */
	const double bw = 100.0f; /** base weight for discount */
	const double ex_pf = 0.5f; /** extra freight over 20 pounds */
	double pf = 0.0f; /** packing and freight */
	double amount = 0.0f; /** total amount of order */
	double weight = 0.0f; /** total weight of vegetables */
	double wa = 0.0f; /** weight of artichoke */
	double wb = 0.0f; /** weight of beet */
	double wc = 0.0f; /** weight of carrot */
	double aa = 0.0f; /** amount of artichoke */
	double ab = 0.0f; /** amount of beet */
	double ac = 0.0f; /** amount of carrot */
	double va = 0.0f; /** variable amount */
	double vw = 0.0f; /** variable weight */
	double discount = 0.0f; /** discount */
	char ch;

	/** 显示物品清单 */
	printf("ABC Grocery Store list for mail delivery:\n");
	printf("************************************************************\n");
	printf("(A)rtichoke           $%.2lf/pound\n", pa);
	printf("(B)eet                $%.2lf/pound\n", pb);
	printf("(C)arrot              $%.2lf/pound\n", pc);
	printf("(Q)uit\n");
	printf("************************************************************\n");
	printf("Choose the menu (a, b, c or q): ");
	while (tolower(ch = getchar()) != 'q')
	{
		if ('\n' == ch)
			continue;
		switch (ch)
		{
			case 'a':
				printf("--------------------------------------------------\n");
				printf("Your choice: Aritchoke, $%.2lf/pound.\n", pa);
				printf("Input the weight:\n");
				scanf("%lf", &vw);
				wa += vw;
				aa = pa * wa;
				printf("Your order: ");
				printf("Aritchoke: weight=%.2lf, price=%.2lf\n", wa, aa);
				printf("--------------------------------------------------\n");
				break;
			case 'b':
				printf("--------------------------------------------------\n");
				printf("You order: Beet, $%.2lf/pound.\n", pb);
				printf("Input the weight:\n");
				scanf("%lf", &vw);
				wb += vw;
				ab = pb * wb;
				printf("Your order: ");
				printf("Beet: weight=%.2lf, price=%.2lf\n", wb, ab);
				printf("--------------------------------------------------\n");
				break;
			case 'c':
				printf("--------------------------------------------------\n");
				printf("You order: Carrot, $%.2lf/pound.\n", pc);
				printf("Input the weight:\n");
				scanf("%lf", &vw);
				wc += vw;
				ac = pc * wc;
				printf("Your order: ");
				printf("Carrot: weight=%.2lf, price=%.2lf\n", wc, ac);
				printf("--------------------------------------------------\n");
				break;
		}
		printf("ABC Grocery Store list for mail delivery:\n");
		printf("************************************************************\n");
		printf("(A)rtichoke           $%.2lf/pound\n", pa);
		printf("(B)eet                $%.2lf/pound\n", pb);
		printf("(C)arrot              $%.2lf/pound\n", pc);
		printf("(Q)uit\n");
		printf("************************************************************\n");
		printf("Choose the menu (a, b, c or q): ");
		/** while (getchar() != '\n') */
		/**     continue; */
	}
	/** 计算总重量和总金额 */
	weight = wa + wb + wc;
	amount = aa + ab + ac;
	/** 计算包装费和运费 */
	if (weight > 0)
	{
		if (weight <= 5.0)
			pf = pf1;
		else if (weight <= 20.0)
			pf = pf2;
		else
			pf = pf2 + (weight - 20.0) * ex_pf;
	}
	/** 判断订单是否有折扣并计算 */
	if (amount >= bw)
		discount = amount * disc;
	/** 显示订单信息 */
	printf("--------------------------------------------------\n");
	printf("Details of Order:\n");
	if (wa)
		printf("Artichoke:            %4.2lf pound(s) $%4.2lf\n", wa, aa);
	if (wb)
		printf("Beet:                 %4.2lf pound(s) $%4.2lf\n", wb, ac);
	if (wc)
		printf("Carrot:               %4.2lf pound(s) $%4.2lf\n",  wc, ac);
	printf("--------------------------------------------------\n");
	printf("Total:               %4.2lf pound(s) $%4.2lf\n", weight, amount);
	printf("Discount(>= $100.0):                  $%4.2lf\n", discount);
	printf("Package and Freight:                  $%4.2lf\n", pf);
	printf("--------------------------------------------------\n");
	printf("Grand Total:         %4.2lf pound(s) $%4.2lf\n", weight, amount - discount + pf);
	printf("--------------------------------------------------\n");

	return 0;
}
