#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : gui2.py
#   Last Modified : 2024-04-07 21:44
#   Describe      : 
#
# ====================================================

import sys
from tkinter import *

root = Tk()
Button(root, text='press', command=root.quit).pack(side=LEFT)
widget = Button(None, text='Hello widget world', command=sys.exit)
widget.pack()
widget.mainloop()
