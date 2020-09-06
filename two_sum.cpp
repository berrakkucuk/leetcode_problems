#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(unsigned int i=0; i<nums.size()-1; i++){
            for(unsigned int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);
                    break;
                }
            }
            
        }
        return nums;
    }
   
    
};
