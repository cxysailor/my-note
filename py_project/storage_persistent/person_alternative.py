#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : person_alternative.py
#   Last Modified : 2024-02-23 19:13
#   Describe      : 
#
# ====================================================

"""
person类的替代实现，包含数据、行为和运算符重载(未用于对象的持久存储)
"""

class Person:
    """一般person: 数据 + 逻辑"""

    def __init__(self, name, age, pay=0, job=None):
        self.name = name
        self.age = age
        self.pay = pay
        self.job = job

    def lastName(self):
        """返回姓"""
        return self.name.split()[-1]

    def giveRaise(self, percent):
        """增加工资
        : percent: 增加工资的比例
        """
        self.pay *= (1.0 + percent)

    def __str__(self):
        return ('<%s => %s %s %s>' % (self.__class__.__name__, self.name, self.job, self.pay))


class Manager(Person):

    """带有自定义加薪的person,继承了通用的lastName,str"""

    def __init__(self, name, age, pay):
        """初始化...

            :name: TODO
            :age: TODO
            :pay: TODO

            """
        Person.__init__(self, name, age, pay, 'manager')

    def giveRaise(self, percent, bonus=0.1):
        """经理的奖金自动加10%

        :percent: 工资增加的比例
        :bonus: 奖金自动增加的比例

        """
        Person.giveRaise(self, percent + bonus)


if __name__ == "__main__":
    bob = Person('Bob Smith', 44)
    sue = Person('Sue Jones', 47, 40000, 'hardware')
    tom = Manager(name='Tom Doe', age=50, pay=50000)
    print(sue, sue.pay, sue.lastName())
    for obj in (bob, sue, tom):
        obj.giveRaise(.10) # 调用该对象的giveRaise方法
        print(obj) # 调用通常的__str__方法
