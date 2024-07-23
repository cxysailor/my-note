#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : peoplegui.py
#   Last Modified : 2024-02-26 10:55
#   Describe      : 
#
# ====================================================

"""
实现一个图形界面，用于查看和更新存储于shelve中的类实例；该shelve保存在脚本运行的机器上，可能是一个多个本地文件
"""

from tkinter import *
from tkinter.messagebox import showerror
import shelve

shelvename = 'class-shelve'
fieldnams = ('name', 'age', 'job', 'pay')

def makeWidgets():
    """docstring for makeWidgets"""
    global entries
    window = Tk()
    window.title('People Shelve')
    form = Frame(window)
    form.pack()
    entries = {}
    for (ix, label) in enumerate(('key',) + fieldnams):
        lab = Label(form, text=label)
        ent = Entry(form)
        lab.grid(row=ix, column=0)
        ent.grid(row=ix, column=1)
        entries[label] = ent
    Button(window, text="Fetch", command=fetchRecord).pack(side=LEFT)
    Button(window, text="Update", command=updateRecord).pack(side=LEFT)
    Button(window, text="Quit", command=window.quit).pack(side=RIGHT)
    return window

def fetchRecord():
    """docstring for fetchRecord"""
    key = entries['key'].get()
    try:
        record = db[key]
    except Exception as e:
        showerror(title='Error', message='No such key!')
    else:
        for field in fieldnams:
            entries[field].delete(0, END)
            entries[field].insert(0, repr(getattr(record, field)))

def updateRecord():
    key = entries['key'].get()
    if key in db:
        record = db[key]
    else:
        from person import Person
        record = Person(name='?', age='?')
    for field in fieldnams:
        setattr(record, field, eval(entries[field].get()))
    db[key] = record

db = shelve.open(shelvename)
window = makeWidgets()
window.mainloop()
db.close()
