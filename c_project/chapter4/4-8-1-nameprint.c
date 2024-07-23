/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-1-nameprint.c
#   Last Modified : 2024-03-20 16:13
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("Enter first name: ");
	scanf("%s", first_name);
	printf("Enter last name: ");
	scanf("%s", last_name);
	printf("\"%s,%s\"\n", first_name, last_name);

	return 0;
}
