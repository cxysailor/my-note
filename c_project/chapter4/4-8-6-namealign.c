/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-6-namealign.c
#   Last Modified : 2024-03-20 21:53
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <string.h>

int main(void)
{
	char first_name[40];
	char last_name[40];
	int fsize;
	int lsize;

	printf("Enter first name: ");
	scanf("%s", first_name);
	printf("Enter last name: ");
	scanf("%s", last_name);
	fsize = strlen(first_name);
	lsize = strlen(last_name);

	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", fsize, fsize, lsize, lsize);

	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", -fsize, fsize, -lsize, lsize);

	return 0;
}
