/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : reducto.c
#   Last Modified : 2024-03-06 20:39
#   Describe      : 简单的文件压缩程序
#
# ====================================================*/
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define LEN 40

int main(int argc, char *argv[])
{
	FILE *in, *out; /*声明两个指向FILE的指针*/
	int ch; 
	char name[LEN]; /*存储输出文件名*/
	int count = 0;

	/** 检查命令行参数 */
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0] );
		exit(EXIT_FAILURE);
	}
	/** 设置输入 */
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1] );
		exit(EXIT_FAILURE);
	}
	/** 设置输出 */
	strncpy(name, argv[1], LEN - 5); /** 拷贝文件名 */
	name[LEN - 5] = '\0';
	strcat(name, ".red"); /** 在文件名后添加.red */
	if ((out = fopen(name, "w")) == NULL) /*以写模式打开文件*/
	{
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
	/** 拷贝数据 */
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out); /** 打印3个字符中第1个字符 */
	/** 收尾工作 */
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
