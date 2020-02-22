# -*- coding: utf-8 -*-
"""
Created on Mon Jan 27 10:16:24 2020

@author: KayDee
"""
if __name__ == '__main__':
    l = int(input())
    s = str(input())

    s = s[0:l]
    

    a= 'a'
    b= 'b'
   
    if s[0] == 'a':
           for a in s:
               if b in s:
                  s = s.replace('a','',1)
                  s = s.replace('b','',1)
        
    if len(s) != 0 and s[0] == 'b':
           for b in s:
               if a in s:
                  s = s.replace('a','',1)
                  s = s.replace('b','',1)

    print(len(s))