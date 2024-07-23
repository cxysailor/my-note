#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : toplevel1.py
#   Last Modified : 2024-04-28 16:39
#   Describe      : 
#
# ====================================================

import tkinter
from tkinter import Tk, Button

tkinter.NoDefaultRoot()

win1 = Tk()
win2 = Tk()

Button(win1, text='Spam', command=win1.destroy).pack()
Button(win2, text='Spam', command=win2.destroy).pack()
win1.mainloop()
