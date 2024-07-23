#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : child.py
#   Last Modified : 2024-03-11 19:26
#   Describe      : 
#
# ====================================================

import sys
import os

print('Hello from child', os.getpid(), sys.argv[1])
