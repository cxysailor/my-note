#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : tkinter103.py
#   Last Modified : 2024-02-26 10:21
#   Describe      : 
#
# ====================================================

from tkinter import *
from tkinter.messagebox import showinfo

def reply(name):
    """docstring for reply"""
    showinfo(title='Reply', message='Hello %s!' % name)

top = Tk()
top.title('Echo')
#  top.iconbitmap('py-blue-trans-out.ico')

Label(top, text="Enter your name:").pack(side=TOP)
ent = Entry(top)
ent.pack(side=TOP)
btn = Button(top, text='Submit', command=(lambda: reply(ent.get())))
btn.pack(side=LEFT)
top.mainloop()
