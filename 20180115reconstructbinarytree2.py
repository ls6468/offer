# -*- coding:utf-8 -*-
#待修改：提示list无属性val
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    # 返回构造的TreeNode根节点
    def reConstructBinaryTree(self, pre, tin):
        # write code here
        self.pre=pre
        self.tin=tin
        a=[]
        p=self.reConstruct(self.pre,0,len(self.pre)-1,self.tin,0,len(self.tin)-1,a)
        return p
    def reConstruct(self,pre,preStart,preEnd,tin,tinStart,tinEnd,a):
        self.pres=pre
        self.preStart=preStart
        self.preEnd=preEnd
        self.tins=tin
        self.tinStart=tinStart
        self.tinEnd=tinEnd
        self.a=a
        if (self.preStart>self.preEnd)or(self.tinStart>self.tinEnd):
            return None
        q=TreeNode(self.pres[self.preStart])
        self.a.append(q.val)
        for i in range(self.tinStart,self.tinEnd):
            if self.tins[i]==self.pres[self.preStart]:
                break
        if (self.preStart<self.preEnd)and(self.tinStart<self.tinEnd):
            q.left=self.reConstruct(self.pres,self.preStart+1,self.preStart+i-self.tinStart,self.tins,self.tinStart,i-1,self.a)
            q.right=self.reConstruct(self.pres,self.preStart+i-self.tinStart+1,self.preEnd,self.tins,i+1,self.tinEnd,self.a)
        return self.a
