# -*- coding: utf-8 -*-
"""
Created on Fri Jan 31 22:31:36 2020

@author: KayDee
"""
#!/bin/python3

import math
import os
import random
import re
import sys
seq = []
count = 0
mex = 0
def b(n):
    global seq
    global count
    while n>0:
        m = n%2
        seq.append(m)
        n = n//2
    seq.reverse()
    return seq


if __name__ == '__main__':
    n = int(input())
    co = b(n)

    for i in (co):
        if i == 1:
            count += 1
        else:
            count = 0
        if count > mex:
            mex = count
        
    print(mex)
