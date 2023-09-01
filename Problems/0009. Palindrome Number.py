# Solution 1
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        elif x >= 0 and x < 10:
            return True
        
        
        y = x
        z = 0
        while y != 0:
            temp = y % 10
            y//= 10
            z = z * 10 + temp
        
        return x == z

# Solution 2
class Solution:
    def isPalindrome(self, x: int) -> bool:
        y = str(x)
        return y == y[::-1]

