/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 7-6-countei.c
#   Last Modified : 2024-03-29 10:26
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	char ch;
	char prev; /** 读取的前一个字符 */
	int count;

	printf("Enter some text (# to terminate):\n");
	while ((ch = getchar()) != '#')
	{
		if (prev == 'e' && ch == 'i')
		{
			count++;
		}
		prev = ch; /** 保存字符 */
	}
	printf("%d of [ei] shows up.\n", count);

	return 0;
}
