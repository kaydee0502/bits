# -*- coding: utf-8 -*-
"""
Created on Thu Feb  6 01:39:12 2020

@author: KayDee
"""
try:
    n = int(input())
    wth = []
    count = 0
    res= []
    
    for k in range(n):
        pc = list(map(int,input().split()))
        sti = str(pc[1])*pc[0]
        ms = str(input().strip())
        for j in range(len(ms)):
            for i in range(len(ms)+1):
                if sti in ms[j:i]:
                    wth.append(ms[j:i])
        for check in wth:
            count = 0
            for t in range(len(check)):
                if check[t] == str(pc[1]):
                    count += 1
            if count > pc[0]:
                    wth.remove(check)
        res.append(len(wth))
        wth = []
    
    
    for x in res:
         print(int(x))
        
except:
    pass