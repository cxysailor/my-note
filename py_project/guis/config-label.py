#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : config-label.py
#   Last Modified : 2024-04-28 16:06
#   Describe      : 
#
# ====================================================

from tkinter import *
root = Tk()
labelfont = ('times', 20, 'bold')
widget = Label(root, text='Hello config world')
widget.config(bg='#154892', fg='yellow')
widget.config(font=labelfont)
widget.config(height=3, width=20)
widget.pack(expand=YES, fill=BOTH)
root.mainloop()
