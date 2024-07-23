/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-1-mintohour.c
#   Last Modified : 2024-03-23 12:38
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	const int MIN_PER_HOUR = 60;
	int min;
	int hour;
	int residue;

	printf("Enter the number of minutes (<=0 to quit): ");
	scanf("%d", &min);
	while (min > 0)
	{
		hour = min / MIN_PER_HOUR;
		residue = min % MIN_PER_HOUR;
		printf("%d minutes is %d hours, %d minutes\n", min, hour, residue);
		printf("Enter the number of minutes (<=0 to quit): ");
		scanf("%d", &min);
	}
	printf("Done!\n");

	return 0;
}
