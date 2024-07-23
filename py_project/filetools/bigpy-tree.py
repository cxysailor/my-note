#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : bigpy-tree.py
#   Last Modified : 2024-03-16 19:16
#   Describe      : 
#
# ====================================================

import sys
import os
import pprint

trace = False
if sys.platform.startswith('win'):
    dirname = r'd:\users\cxysa\appdata\local\programs\python\python39\lib'  # windows下可用
else:
    dirname = '/usr/lib64/python3.9'  # Unix, Linux, Cygwin下可用

allsizes = []
for (thisDir, subHere, filesHere) in os.walk(dirname):
    if trace: print(thisDir)
    for filename in filesHere:
        if filename.endswith('.py'):
            if trace: print('...', filename)
            fullname = os.path.join(thisDir, filename)
            fullsize = os.path.getsize(fullname)
            allsizes.append((fullsize, fullname))

allsizes.sort()
pprint.pprint(allsizes[:2])
pprint.pprint(allsizes[-2:])
