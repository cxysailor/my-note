#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : tkinter102.py
#   Last Modified : 2024-02-25 16:41
#   Describe      : 
#
# ====================================================

from tkinter import *
from tkinter.messagebox import showinfo

class MyGui(Frame):
    """docstring for MyGui"""
    def __init__(self, parent=None):
        super(MyGui, self).__init__()
        Frame.__init__(self, parent)
        button = Button(self, text='press', command=self.reply)
        button.pack()

    def reply(self):
        """docstring for reply"""
        showinfo(title='popup', message='Button pressed!') 


if __name__ == "__main__":
    window = MyGui()
    window.pack()
    window.mainloop()
