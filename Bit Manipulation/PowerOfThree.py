class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0:
            return False
        while n%3 == 0:          # Divisible by 3 or not  (15, 18 also included)
            n //= 3              # Floor Division (15 at last will be 5, 18 at last will be 2)
        return n==1              # Only powers of 3 at last will be  1
