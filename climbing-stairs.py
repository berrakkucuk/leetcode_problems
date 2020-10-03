class Solution:
    
    #Recursive Factorial Function
    def factorial(n):
        if n == 1:
            return n
        elif n == 0:
            return 1
        else:
            return n*factorial(n-1)
    
    
    def climbStairs(self, n: int) -> int:
        
        x = 0
        y = 0
        count = 0
        poss = 0
        
        #In my code, x stands for the number of the "2 steps at a time". y stands for "1 step at a time". 
        #After I find the possibilities of how many of each there can be, I calculated the combinations and added them to the "count" which will be returned at the end.
        
        for x in range(0,n):
            if 2*x <= n:
                y = n - 2*x
                poss = factorial(x+y) / (factorial(x) * factorial(y))
                count += poss
            
            
        return int(count)
