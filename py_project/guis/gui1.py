#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : gui1.py
#   Last Modified : 2024-04-07 21:31
#   Describe      : 
#
# ====================================================

#  from tkinter import Label  # 获取组件对象
from tkinter import *

root = Tk()
widget = Label(root)
widget.config(text='Hello GUI world!')
widget.pack(side=TOP, expand=YES, fill=BOTH)
root.title('gui1.py')
root.mainloop()
