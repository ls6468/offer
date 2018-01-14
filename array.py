# -*- coding:utf-8 -*-
class Solution:
    # array ¶şÎ¬ÁĞ±í
    def Find(self, target, array):
        # write code here
        self.target=target
        self.array=array
        length=len(self.array)
        flag=0
        n=len(self.array[0])
        for i in range(length):
            for j in range(n)[::-1]:
                if self.target==self.array[i][j]:
                    flag=1
                    return True
                elif self.target>self.array[i][j]:
                    break
                else:
                    n=n-1
                    continue
        if flag==0:
            return False
