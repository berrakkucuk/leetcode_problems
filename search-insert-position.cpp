class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int len = nums.size();
        int a=0;
        
        if(target>nums[len-1])
            return len;
        
        if(target<nums[0])
            return 0;
        
        for(int i=0; i<len; i++) {
            
            if(target==nums[i])
                a=i;
            
            else if(target>nums[i] && target<nums[i+1])
                a=i+1;
            
        }
        
        return a;
       
        }
        
      
        
    
};
