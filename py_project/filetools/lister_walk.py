#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : lister_walk.py
#   Last Modified : 2024-03-10 17:49
#   Describe      : 
#
# ====================================================

import sys
import os

def lister(root):  # 对于根目录
    """用os.walk完成目录树列举"""
    for (thisdir, subshere, fileshere) in os.walk(root):  # 生成目录树的目录列表
        print('[' + thisdir + ']')
        for fname in fileshere:  # 打印这个目录下的文件
            path = os.path.join(thisdir, fname)  # 添加目录名前缀
            print(path)


if __name__ == "__main__":
    lister(sys.argv[1])  # 目录名从命令行传入

