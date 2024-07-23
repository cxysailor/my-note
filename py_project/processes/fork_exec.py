#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : fork_exec.py
#   Last Modified : 2024-03-11 18:24
#   Describe      : 
#
# ====================================================

import os

parm = 0
while True:
    parm += 1
    pid = os.fork()
    if pid == 0:
        os.execlp('python', 'python', 'child.py', str(parm))
        assert False, 'error starting program'
    else:
        print('Child is', pid)
        if input() == 'q': break

