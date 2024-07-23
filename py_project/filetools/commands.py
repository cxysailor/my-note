#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : commands.py
#   Last Modified : 2024-03-07 22:19
#   Describe      : 
#
# ====================================================

from sys import argv
from scanfile import scanner


class UnknowCommand(Exception): pass


def processLine(line):
    if line[0] == '*':
        print("Ms.", line[1:-1])
    elif line[0] == '+':
        print("Mr.", line[1:-1])
    else:
        raise UnknowCommand(line)

filename = 'data.txt'
if len(argv) == 2: filename = argv[1]
scanner(filename, processLine)
