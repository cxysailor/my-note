#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : bigpy-dir.py
#   Last Modified : 2024-03-15 20:05
#   Describe      : 
#
# ====================================================
"""
找出单个目录下最大的python源代码文件，除非在命令行指定了目录，否则搜索python源代码库
"""

import sys
import os
import glob

dirname = '/usr/lib64/python3.9' if len(sys.argv) == 1 else sys.argv[1]

allsizes = []
allpy = glob.glob(dirname + os.sep + '*.py')
for filename in allpy:
    filesize = os.path.getsize(filename)
    allsizes.append((filesize, filename))

allsizes.sort()
print(allsizes[:2])
print(allsizes[-2:])
