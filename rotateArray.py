# -*- coding:utf-8 -*-
#³¬Ê±
class Solution:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        self.rotateArray=rotateArray
        self.lens=len(self.rotateArray)
        self.index1=0
        self.index2=self.lens-1
        self.indexmid=0
        if self.lens==0:
            return None
        while self.rotateArray[self.index1]>=self.rotateArray[self.index2]:
            if self.index2-self.index1==1:
                self.indexmid=self.index2
                break
            self.indexmid=(self.index1+self.index2)/2
            if (self.rotateArray[self.index1]==self.rotateArray[self.index2])and(self.rotateArray[self.index1]==self.rotateArray[self.indexmid]):
                return self.shunxu()
            if self.rotateArray[self.indexmid]>=self.rotateArray[self.index1]:
                self.rotateArray[self.index1]=self.rotateArray[self.indexmid]
            else:
                self.rotateArray[self.index2]=self.rotateArray[self.indexmid]
        return self.rotateArray[self.indexmid]
    def shunxu(self):
        self.result=self.rotateArray[0]
        for i in range(self.rotateArray[self.index1+1],self.rotateArray[self.index2]+1):
            if self.rotateArray[i]<self.result:
                self.result=self.rotateArray[i]
        return self.result