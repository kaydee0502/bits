# -*- coding: utf-8 -*-
"""
Created on Tue Jan 28 23:14:33 2020

@author: KayDee
"""

T =int(input())
n = 0
cupid = 0
for a in range(T):
    ids = list(input().split())
    startid = int(ids[0])
    endid = int(ids[1])
    n = endid - startid + 1
    hover = startid
    
    for i in range(hover,endid+1):
    ##############################
        for j in range (2,9):
           if (i % j) == 0 and i != j:
                cupid += 0
                break
           
           else:
                cupid += 1

print("%.15f"%cupid)
    