/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-4-countwords.c
#   Last Modified : 2024-04-06 13:08
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <ctype.h>
# include <stdbool.h>

int main(void)
{
	int ch;
	int n_word; /** 单词的个数 */
	int count; /** 非空白字符标点符号的个数 */
	bool inword = false; /** 如果ch在单词中，inword设置为true */

	printf("Enter text to be analyzed:\n");
	while ((ch = getchar()) != EOF)
	{
		if (!isspace(ch) && !ispunct(ch))
		{
			count++; /** 统计空白及标点符号以外的字符个数 */
			if (!inword)
			{
				n_word++; /** 统计单词的个数 */
				inword = true;
			}
		}
		else
		{
			inword = false; /** 单词结束 */
		}
	}
	printf("Number of words: %d\n", n_word);
	printf("Number of non-blank characters: %d\n", count);
	printf("Each word has %d characters in average.\n", count / n_word);

	return 0;
}
