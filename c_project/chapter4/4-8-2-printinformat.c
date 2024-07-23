/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-2-printinformat.c
#   Last Modified : 2024-03-20 19:08
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <string.h>

int main(void)
{
	char name[20];
	int length;

	printf("Enter your first name: ");
	scanf("%s", name);
	length = strlen(name);
	printf("\"%s\"\n", name);
	printf("\"%*s\"\n", 20, name);
	printf("\"%*s\"\n", -20, name);
	printf("\"%*s\"\n", 3 + length, name);

	return 0;
}
