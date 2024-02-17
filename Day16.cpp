Q.1. Two Sum
link-->https://leetcode.com/problems/two-sum/description/
code-->vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
