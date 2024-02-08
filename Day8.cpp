Q.287. Find the Duplicate Number
link-->https://leetcode.com/problems/find-the-duplicate-number/description/
code-->int findDuplicate(vector<int>& nums) {
        int count=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
        
                if(nums[i]==nums[i+1]){
                    return nums[i];
                }
            
        }
        return -1;
    }
