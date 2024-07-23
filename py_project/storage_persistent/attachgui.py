#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : attachgui.py
#   Last Modified : 2024-02-25 17:27
#   Describe      : 
#
# ====================================================

from tkinter import *
from tkinter102 import MyGui

mainwin = Tk()
Label(mainwin, text=__name__).pack()

popup = Toplevel()
Label(popup, text='Attach').pack(side=LEFT)
MyGui(popup).pack(side=RIGHT) # 附加myframe
mainwin.mainloop()
