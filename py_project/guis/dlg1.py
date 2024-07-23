#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : dlg1.py
#   Last Modified : 2024-04-28 19:52
#   Describe      : 
#
# ====================================================

from tkinter import *
from tkinter.messagebox import *


def callback():
    if askyesno('Verify', 'Do you really want to quit?'):
        showwarning('Yes', 'Quit not yet implementd')
    else:
        showinfo('No', 'Quit has been cancelled')


if __name__ == "__main__":
    errmsg = 'Sorry, no Spam allowed!'
    Button(text='Quit', command=callback).pack(fill=X)
    Button(text='Spam', command=(lambda: showerror('Spam', errmsg))).pack(fill=X)
    mainloop()
