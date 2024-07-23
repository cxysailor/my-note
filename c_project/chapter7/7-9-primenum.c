/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-9-primenum.c
#   Last Modified : 2024-03-30 09:35
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <stdbool.h>

int main(void)
{
	unsigned long number; /** 输入的正整数 */
	unsigned long num; /** 小于等于number的所有正整数 */
	unsigned long div; /** num的约数 */
	bool isprime; /** 判断是否为素数 */

	printf("Enter a positive integer number: ");
	scanf("%lu", &number);
	printf("The primers of <= %lu:\n", number);
	for (num = 2; num <= number; num++) /** 因为最小的素数是2,故从2开始 */
	{
		for (div = 2, isprime = true; (div * div) <= num; div++)
			if (num % div == 0)
				isprime = false; /** 可以整除，说明num不是素数 */
		/** 如果isprime为true，说明是素数，打印输出 */
		if (isprime)
			printf("%lu ", num);
	}
	printf("\n");
	
	return 0;
}
