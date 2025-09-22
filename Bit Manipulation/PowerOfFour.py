class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        return n==1 or (n>0 and n%3==1 and n&(n-1)==0) # n%3==1 is imp, n%4==0 will not work as 8 also satisfies this
