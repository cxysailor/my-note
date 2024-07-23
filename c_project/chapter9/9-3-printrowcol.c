/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-3-printrowcol.c
#   Last Modified : 2024-04-27 20:56
#   Describe      : 
#
# ====================================================*/

# include <ctype.h>
# include <stdio.h>

void display(char ch, int low, int upper);

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
		display(ch, row, col);
		while (getchar() != '\n')
			continue;

	}
	return 0;
}
void display(char ch, int low, int upper)
{
	int row;
	int col;

	for (row = 1; row <= upper; row++)
	{
		for (col = 1; col <= low; col++)
			putchar(ch);
		putchar('\n');
	}
}
