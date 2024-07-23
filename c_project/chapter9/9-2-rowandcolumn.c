/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-2-rowandcolumn.c
#   Last Modified : 2024-04-25 14:10
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	int row;
	int col;
	char ch;

	printf("Enter a character and two integers:\n");
	while ((ch = getchar()) != '\n')
	{
		if ((scanf("%d %d", &row, &col)) != 2)
			break;
		chline(ch, row, col);
		while (getchar() != '\n')
		{
			continue;
		}
	}

	return 0;
}
void chline(char ch, int i, int j)
{
	int row;
	int col;

	for (row = 1; row <= j; row++)
	{
		for (col = 1; col <= i; col++)
			putchar(ch);
		putchar('\n');
	}
}
