/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-15-chars.c
#   Last Modified : 2024-03-25 14:03
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <string.h>

int main(void)
{
	const int size = 255;
	char ch[size];
	int index;

	printf("Enter some letters:\n");
	for (index = 0; index < size; index++)
	{
		scanf("%c", &ch[index]);
	}
	printf("Print out as reverse:\n ");
	for (index = strlen(ch) - 1; index >=0; index--)
	{
		printf("%c", ch[index]);
	}
	printf("\n");
	
	return 0;
}
