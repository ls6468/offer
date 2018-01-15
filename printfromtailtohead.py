# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # 返回从尾部到头部的列表值序列，例如[1,2,3]
    def printListFromTailToHead(self, listNode):
        # write code here
        self.listnode=listNode
        a=[]
        b=[]
        while self.listnode:
            a.append(self.listnode.val)
            self.listnode=self.listnode.next
        for i in a[::-1]:
            b.append(i)
        return b