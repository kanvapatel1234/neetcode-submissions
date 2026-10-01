class Solution {
public:
    int maxArea(vector<int>& nums) {
        int marea=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int area=min(nums[i],nums[j])*(j-i);
            marea=max(marea,area);
            if(nums[i]<nums[j]){
                i++;
            }
            else{
                j--;
            }

            
        }
        return marea;
        
    }
};
