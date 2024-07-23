#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : more.py
#   Last Modified : 2024-02-27 20:42
#   Describe      : 
#
# ====================================================

def more(text, numlines=15):
    """分割字符串或文本文件并交互地进行分页"""
    lines = text.splitlines()
    while lines:
        chunk = lines[:numlines]
        lines = lines[numlines:]
        for line in chunk: print(line)
        if lines and input('More') not in ['y', 'Y']: break

if __name__ == "__main__":
    import sys
    more(open(sys.argv[1]).read(), 10)
