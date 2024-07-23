#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : ls_dir.py
#   Last Modified : 2024-03-10 11:40
#   Describe      : 
#
# ====================================================

import os

def list_dir(dirs):
    for d in os.listdir(dirs):
        if not os.path.isdir(d):
            print(os.path.abspath(d))
        else:
        #      print(os.path.abspath(d))
            list_dir(os.path.abspath(d))

if __name__ == "__main__":
    list_dir('/home/cxy/learning/py_project/')
