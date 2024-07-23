#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : fork1.py
#   Last Modified : 2024-03-10 20:34
#   Describe      : 
#
# ====================================================

import os


def child():
    """子进程"""
    print('Hello from child', os.getpid())
    os._exit(0)  # 否则将回到父循环中


def parent():
    """父进程"""
    while True:
        newpid = os.fork()  # 创建子进程
        if newpid == 0:
            child()
        else:
            print('Hello from parent', os.getpid(), newpid)
        if input() == 'q': break


if __name__ == "__main__":
    parent()
