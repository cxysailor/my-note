#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : toplevel2.py
#   Last Modified : 2024-04-28 18:07
#   Describe      : 
#
# ====================================================

from tkinter import *

root = Tk()

trees = [
    ('The Larch!', 'light blue'),
    ('The Pine!', 'light green'),
    ('The Giant Redwood!', 'red')
    ]
for (tree, color) in trees:
    win = Toplevel(root)
    win.title('Sing...')
    win.protocol('WM_DELETE_WINDOW', lambda:None)
    #  win.iconbitmap('hao123.ico')
    msg = Button(win, text=tree, command=win.destroy)
    msg.pack(expand=YES, fill=BOTH)
    msg.config(padx=10, pady=10, bd=10, relief=RAISED)
    msg.config(bg='black', fg=color, font=('times', 30, 'bold italic'))

root.title('Lumberjack demo')
Label(root, text='Main window', width=30).pack()
Button(root, text='Quit All', command=root.quit).pack()
root.mainloop()
