#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : teststreams.py
#   Last Modified : 2024-02-29 13:50
#   Describe      : 
#
# ====================================================

def interact():
    """read numbers till eof and show squares"""
    print('Hello stream world')
    while True:
        try:
            reply = input('Enter a number> ')
        except EOFError as e:
            break
        else:
            num = int(reply)
            print("%d squares is %d" % (num, num ** 2))
    print('Bye')

if __name__ == "__main__":
    interact()
