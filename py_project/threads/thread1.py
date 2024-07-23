#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : thread1.py
#   Last Modified : 2024-03-13 12:23
#   Describe      : 
#
# ====================================================

import _thread


def child(tid):
    print('Hello from thread', tid)

def parent():
    i = 0
    while True:
        i += 1
        _thread.start_new_thread(child, (i,))
        if input() == 'q': break


if __name__ == "__main__":
    parent()
