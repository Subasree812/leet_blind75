class Solution {
    public int maxProfit(int[] prices) {
        int max=0,i,j,diff;
        for(i=0;i<prices.length;i++){
            for(j=i+1;j<prices.length;j++){
                if(prices[j]>prices[i]){
                    diff=prices[j]-prices[i];
                    if(diff>max){
                        max=diff;
                    }
                }
            }
        }
            return max;
        }
    
}
