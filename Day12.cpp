Q.229. Majority Element II
link-->https://leetcode.com/problems/majority-element-ii/description/
code->vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second > nums.size()/3){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
