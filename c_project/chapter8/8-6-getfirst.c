/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-6-getfirst.c
#   Last Modified : 2024-04-10 19:54
#   Describe      : 
#
# ====================================================*/

# include <ctype.h>
# include <stdio.h>

char get_first(void);

int main(void)
{
	char ch;

	printf("Enter some characters:\n");
	while ((ch = get_first()) != EOF)
	{
		printf("%c\n", ch);
		printf("Enter some characters:\n");
	}
	printf("Done!\n");

	return 0;
}

char get_first(void)
{
	char ch;

	do
	{
		ch = getchar();
	}while (isspace(ch));
	/** while ((ch = getchar()) && !isspace(ch)) */
	/** { */
		/** if (!isspace(ch)) */
			/** putchar(ch); */
		/** else */
		/**     continue; */
	while (getchar() != '\n')
		continue;
	/** } */

	return ch;
}
