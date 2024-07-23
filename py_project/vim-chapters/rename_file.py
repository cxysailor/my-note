#!/usr/bin/env/ python
# -*- coding: UTF-8 -*-
# =======================================
# @Project : learning
# @File    : rename_file.py
# @IDE     : PyCharm
# @Auther  : cxysailor
# @Email   : cxysailor@163.com
# @Date    : 2024/3/8 12:51
# =======================================
import os
import sys

def file_rename(path):
    """
    原来目录中的markdown文件都是以数字命名的，不太直观(因为需要从文件名了解这个文档的内容，仅仅是数字文件名不知道内容是什么)
    所以，这个程序就是用来把文件改名 - 根据每一个文档内容的标题，再加上数字，形成新的文件名
    比如：原文件名 00.markdown ==> 新文件名 00 Prerequisites.markdown
    """
    # 列出当前目录下的所有文件名
    file_list = os.listdir(path)
    for file in file_list:
        # 排除目录内的.py文件 - 因为修改文件名的python脚本文件也在该目录内
        if not file.endswith('.py'):
            # 打开每个文件并取出其标题
            with open(file, 'r') as f:
                title = f.readlines()[0][:-1]
                # 若已经改名了，则跳过该文件
                if title in file: continue
                # 新的文件名 - 把原文件名的数字替换为"数字 标题"
                new_file_name = file.replace(file.split('.')[0], file.split('.')[0] + ' ' + title)
                #  显示哪些文件被修改了
                print(file, "==>", new_file_name)
                # 执行文件改名操作
                os.rename(file, new_file_name)


if __name__ == '__main__':
    try:
        file_rename(sys.argv[1])  # 目录名从命令行传入
        print("Done!\n")
    except IndexError as e:
        print("No directory found...")
