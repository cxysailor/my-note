/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-7-words.c
#   Last Modified : 2024-03-24 16:10
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <string.h>
# define SIZE 40

int main(void)
{
	char word[SIZE];
	int index;

	printf("Enter a word: ");
	scanf("%s", word);
	printf("Print out the word as reversed order:\n");
	for (index = strlen(word) - 1; index >= 0; index--)
		printf("%c", word[index]);
	printf("\n");

	return 0;
}
