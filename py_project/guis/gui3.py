#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : gui3.py
#   Last Modified : 2024-04-08 09:34
#   Describe      : 
#
# ====================================================

import sys
from tkinter import *

def quit():
    print('Hello, I must be going...')
    sys.exit()

widget = Button(None, text='Hello event world', command=quit)
widget.pack()
widget.mainloop()
