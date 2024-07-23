#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : customizegui.py
#   Last Modified : 2024-02-26 10:11
#   Describe      : 
#
# ====================================================

from tkinter import mainloop
from tkinter.messagebox import showinfo
from tkinter102 import MyGui


class CustomGui(MyGui):

    def reply(self):
        """docstring for reply"""
        showinfo(title='popup', message='Ouch!')


if __name__ == "__main__":
    CustomGui().pack()
    mainloop()
