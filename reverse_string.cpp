class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int length = s.size();
        char temp;
        
        for(int i=0; i<length/2; i++) {
            
            temp = s[i];
            s[i] = s[length-1-i];
            s[length-1-i] = temp;
        }       
    }
};

/*
Runtime: 16 ms, faster than 93.58% of C++ online submissions for Reverse String.
Memory Usage: 23.3 MB, less than 39.86% of C++ online submissions for Reverse String.
*/
