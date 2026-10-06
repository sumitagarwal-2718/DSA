class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int res=0,count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else if(nums[i]==0){
                count=0;
            }
            res=max(count,res);
        }
        return res;
    }
};