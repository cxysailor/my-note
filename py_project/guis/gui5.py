#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : gui5.py
#   Last Modified : 2024-04-08 10:23
#   Describe      : 
#
# ====================================================

from tkinter import *


class HelloButton(Button):
    def __init__(self, parent=None, **config):
        Button.__init__(self, parent, **config)
        self.pack()
        self.config(command=self.callback)

    def callback(self):
        print('Goodbye world...')
        self.quit()


if __name__ == "__main__":
    HelloButton(text='Hello subclass world').mainloop()
