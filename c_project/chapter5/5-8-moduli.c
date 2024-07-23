/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-8-moduli.c
#   Last Modified : 2024-03-23 20:10
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int first_number;
	int second_number;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &second_number);
	printf("Now enter the first operand: ");
	scanf("%d", &first_number);
	while (second_number > 0 && first_number > 0)
	{
		printf("%d %% %d is %d\n", first_number, second_number, first_number % second_number);
		printf("Enter the next number for first operand (<=0 to quit): ");
		scanf("%d", &first_number);
	}
	printf("Done!\n");

	return 0;
}
