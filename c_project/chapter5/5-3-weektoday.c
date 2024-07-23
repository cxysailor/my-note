/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-3-weektoday.c
#   Last Modified : 2024-03-23 14:21
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define DAY_PER_WEEK 7

int main(void)
{
	int days;
	int weeks;
	int left;

	printf("Enter a number of days: ");
	scanf("%d", &days);
	while (days > 0) {
		weeks = days / DAY_PER_WEEK;
		left = days % DAY_PER_WEEK;
		printf("%d days are %d weeks, %d days.\n", days, weeks, left);
		printf("Enter a number of days (<=0 to quit): ");
		scanf("%d", &days);
	}
	printf("Done!\n");

	return 0;
}
