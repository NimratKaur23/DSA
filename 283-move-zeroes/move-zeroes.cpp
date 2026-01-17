class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*
        int i=0;
        int j=i+1;
        while(i<nums.size() && j<nums.size()) {
            if(nums[i]==0) {
                swap(nums[i],nums[j]);
                j++;
            }
            else {
                i++;
            }
        }
        */


    
    int i=0;
    for(int j=0;j<nums.size();j++) {
        if(nums[j]!=0) {
            swap(nums[j],nums[i]);
            i++;
        }
    }


    
    }
};