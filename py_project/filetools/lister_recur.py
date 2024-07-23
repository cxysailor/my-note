#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : lister_recur.py
#   Last Modified : 2024-03-10 18:58
#   Describe      : 
#
# ====================================================

import sys
import os

def mylister(currdir):
    """以递归的方式列举目录树中的文件"""
    print('[' + currdir + ']')
    for file in os.listdir(currdir):  # 这段代码负责列举文件
        path = os.path.join(currdir, file)  # 把目录路径添加回去
        if not os.path.isdir(path):
            print(path)
        else:
            mylister(path)  # 递归进入子目录


if __name__ == "__main__":
    mylister(sys.argv[1])  # 目录名从命令行中传入

