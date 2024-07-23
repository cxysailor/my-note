/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-5-guessnumber.c
#   Last Modified : 2024-04-10 12:07
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	int guess = 50;
	int up = 100;
	int lo = 0;
	char ch;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\na b if it is bigger, s if it is smaller.\n");
	printf("Uh...is your number %d\n", guess);
	while ((ch = getchar()) != 'y') /** 获取响应 */
	{
		if (ch == 'b') /** 猜的数字大了 */
		{
			up = guess;
			guess = (guess - lo) / 2 + lo;
			printf("Well, then, is it %d?\n", guess);
		}
		else if (ch == 's') /** 猜的数字小了 */
		{
			lo = guess;
			guess = (up - guess) / 2 + guess;
			printf("Well, then, is it %d?\n", guess);
		}
		else { /** 输入了其他的字符 */
			printf("Please enter y, b or s.\n");
		}
		/** 扔掉输入行的其他字符 - 只保留第一个输入的字符 */
		while (getchar() != '\n')
			continue;
	}
	printf("I knew I could do it!\n");

	return 0;
}
