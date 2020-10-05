class Solution {
public:
    int mySqrt(int x) {
        
        long long unsigned int a = 0;
        long long unsigned int i;
        
        if (x <= 3 && x != 0)
            return 1;
        
        else {
            
            for(i=0; i<=x/2; i++) {
            
            if(i*i == x)
                a = i;
            
            else if(i*i < x && x < (i+1)*(i+1))
                a = i;
            
        }
            
        }
        
       return a;
        
    }
};
