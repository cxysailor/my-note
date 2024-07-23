/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 9-7-letters.c
#   Last Modified : 2024-05-05 16:17
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <ctype.h>

int get_chars(void);
void display(int ch);

int main(void)
{
	int ch;

	printf("Enter some characters:\n");
	while ((ch = get_chars()) != EOF)
		display(ch);

	return 0;
}
int get_chars(void)
{
	int ch;

	ch = getchar();

	return ch;
}
void display(int ch)
{
	if (isalpha(ch))
	{
		printf("[%c] is an alphabet ", ch);
		printf("and its position in Alphabet is: %d\n", tolower(ch) - 96);
	}
	else if (ch != '\n')
	{
		printf("[%c] is not an alphabet,", ch);
		printf(" so print it out as: -1\n");
	}
	else
		putchar(ch);
}
