class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int reference = 0;
        int profit;
        int index;
        
        int i;
        int j; 
        
        for(i=0 ; i<prices.size() ; i++) {
            
            for(j=i+1 ; j<prices.size() ; j++) {
                
                profit = prices[i] - prices[j];
                
                if(profit <= reference){
                    reference = profit;
                    index = j;
                }
                
            }
            
        }
        
                 
             return 0-reference;
    }
};
