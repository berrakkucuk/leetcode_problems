class Solution {
public:
    int reverse(int x) {
        
        int reversed = 0;
        int mult = 1;
        int last_digit;
        vector<int> number;
        
        while (x != 0) {
            
            last_digit = x % 10;
            
            x /= 10;
            
            if (reversed > INT_MAX/10 || (reversed == INT_MAX/10 && last_digit > 7))
                return 0;
            
            if (reversed < INT_MIN/10 || (reversed == INT_MIN/10 && last_digit < -8))
                return 0;
            
            reversed = reversed * 10 + last_digit;
            
        }
     
        return reversed;
        
    }
};
