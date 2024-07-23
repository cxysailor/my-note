#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : manager.py
#   Last Modified : 2024-02-23 18:35
#   Describe      : 
#
# ====================================================

from person import Person


class Manager(Person):

    """经理的奖金自动增加额外的10%"""

    def __init__(self, name, age, pay):

        """继承调用父类的方法，将job自动赋值为manager"""

        Person.__init__(self, name, age, pay, 'manager')
        

    def giveRaise(self, percent, bonus=0.1):
        """奖金增加

        :persent: 工资增加的比例
        :bonus: 奖金额外增加的比例

        """
        Person.giveRaise(self, percent + bonus)


if __name__ == "__main__":
    tom = Manager(name='Tom Doe', age=50, pay=50000)
    print(tom.lastName())
    tom.giveRaise(.20)
    print(tom.pay)
    tom = Manager('Tom Jones', 50, 50000)
    print(tom)
    print(tom.job)
