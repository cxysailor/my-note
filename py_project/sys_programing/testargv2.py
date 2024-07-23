#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : testargv2.py
#   Last Modified : 2024-02-28 15:41
#   Describe      : 
#
# ====================================================

"""
Collect command-line options in a dictionary
"""

def getopts(argv):
    """collect command-line options in a dictionary"""
    opts = {}
    while argv:
        if argv[0][0] == '-': # 找到"-名称 值"键值对
            opts[argv[0]] = argv[1] # 字典关键字为参数"-名称"
            argv = argv[2:]
        else:
            argv = argv[1:]
    return opts

if __name__ == "__main__":
    from sys import argv # 示例的客户端代码
    #  print(argv)
    #  print(argv[0])
    #  print(argv[0][0])
    myargs = getopts(argv)
    #  if '-i' in myargs:
    #      print(myargs['-i'])
    print(myargs)
