#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : scanfile.py
#   Last Modified : 2024-03-07 22:19
#   Describe      : 
#
# ====================================================

def scanner(name, function):
    file = open(name, 'r')
    while True:
        line = file.readline()
        if not line: break
        function(line)
    file.close()
