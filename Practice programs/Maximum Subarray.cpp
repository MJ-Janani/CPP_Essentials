class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;//to handle cases with all negative no.s
      
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                if(sum>ans){
                    ans=sum;
                }
            }      
        }
        return ans;
        
    }
};
