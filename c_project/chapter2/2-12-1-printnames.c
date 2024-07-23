/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 2-12-1-printnames.c
#   Last Modified : 2024-03-18 08:36
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	const char *first = "Gustav";
	const char *last = "Mahler";
	/** 或者声明为数组 */
	/** char first[] = "Gustav"; */
	/** char last[] = "Mahler"; */

	/** 使用变量 */
	printf("%s %s\n", first, last);
	printf("%s\n%s\n", first, last);
	printf("%s", first);
	printf(" %s\n", last);
	printf("==============================\n");
	/** 直接打印字符串 */
	printf("Gustav Mahler\n");
	printf("Gustav\nMahler\n");
	printf("Gustav ");
	printf("Mahler\n");
	return 0;
}
