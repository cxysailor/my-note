/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-2-printnumbers.c
#   Last Modified : 2024-03-23 14:07
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int inum;
	int upper;

	printf("Enter an integer number: ");
	scanf("%d", &inum);
	upper = inum + 10;
	while (inum <= upper)
	{
		/** 以空格分隔 */
		/** printf("%d ", inum); */
		/** 以制表符分隔 */
		/** printf("%d\t", inum); */
		/** 以换行符分隔 */
		printf("%d\n", inum);
		inum++;
	}
	printf("\nDone!\n");
	return 0;
}
