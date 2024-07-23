#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : restore_file.py
#   Last Modified : 2024-03-09 20:38
#   Describe      : 
#
# ====================================================

import os


def file_restore():
    """将文件名恢复成原来的
    比如：00 Prerequisites.markdown ==> 00.markdown
    """
    #  列出目录下的所有文件名 - 一个列表
    file_lists = os.listdir()
    #  遍历文件列表
    for file in file_lists:
        #  排除.py文件
        if not file.endswith('.py'):
            #  将每个文件名以.分割拆分为两部分，如：aaa.bbb ==> aaa bbb
            exp_name = file.split('.')[1]  # 扩展名，即.后面的部分bbb
            #  取出文件名最前面的两个数字
            numbers = file[:2]
            #  拼接新文件名，如:01.markdown
            new_file_name = numbers + '.' + exp_name
            #  若文件已经改名了，则跳过该文件
            if new_file_name != file:
                #  显示哪些文件改名
                print(file, '==>', new_file_name)
                #  执行改名操作
                os.rename(file, new_file_name)


if __name__ == "__main__":
    try:
        file_restore()
        print("Done!\n")
    except IndexError as e:
        print("No more file to be restored!")
