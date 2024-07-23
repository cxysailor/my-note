#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : adder.py
#   Last Modified : 2024-03-02 13:00
#   Describe      : 
#
# ====================================================

import sys

sum = 0
while True:
    try:
        line = input()
    except EOFError as e:
        break
    else:
        sum += int(line)

print(sum)
