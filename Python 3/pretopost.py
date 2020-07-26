# -*- coding: utf-8 -*-
"""
Created on Sun Jul 19 14:55:52 2020

@author: KayDee
"""

class TreeNode():
    def __init__(self,val):
        self.val = val
        self.left = None
        self.right = None
def copytree(arr):
    head = TreeNode(arr.pop())
    temp = head
    while arr:
        #print("ws",temp.val)
        
        if arr[-1] < temp.val:
            if not temp.left:
                temp.left = TreeNode(arr.pop())
                #print(temp.val)
                temp = head
            else:
                temp = temp.left
            
            
        if arr[-1] > temp.val:
            #print("rig",temp.val)
            if not temp.right:
                temp.right = TreeNode(arr.pop())
                #print(temp.val)
                temp = head
            else:
                temp = temp.right
            
            
    return head
    
    
    
    
def postOrder(head):
    if head.left:
        postOrder(head.left)
    if head.right:
        postOrder(head.right)
    print(head.val, end= " ")

for _ in range(int(input())):
    dump = input()
    nodearr = list(map(int,input().split()))
    node = copytree(nodearr[::-1])
    postOrder(node)
    
        