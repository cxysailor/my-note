#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : sorter.py
#   Last Modified : 2024-03-02 12:54
#   Describe      : 
#
# ====================================================

import sys

lines = sys.stdin.readlines()
lines.sort()
for line in lines: print(line, end='')
