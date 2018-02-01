# -*- coding:utf-8 -*-
class Solution:
    def Fibonacci(self, n):
        # write code here
        self.n=n
        a=[0,1]
        if n<2:
            return a[n]
        f1=1
        f2=0
        for i in range(2,n+1):
            f=f1+f2
            f2=f1
            f1=f
        return f
