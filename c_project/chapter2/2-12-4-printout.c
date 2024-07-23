/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 2-12-4-printout.c
#   Last Modified : 2024-03-18 09:27
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}
