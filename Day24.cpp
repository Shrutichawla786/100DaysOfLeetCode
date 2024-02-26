Q.Print Anagrams Together
link-->https://leetcode.com/problems/group-anagrams/description/
code-->vector<vector<string>> groupAnagrams(vector<string>& string_list) {
          map<string , vector<string>>mp;
        for(int i=0;i<string_list.size();i++){
            string s= string_list[i];
            sort(s.begin() , s.end());
            mp[s].push_back(string_list[i]);
        }
        int ind=0;
        vector<vector<string>>ans(mp.size());
         for(auto x:mp){
            auto v= x.second;
            for(int i =0 ;i<v.size();i++){
                ans[ind].push_back(v[i]);
            }
            ind++;
        }
        return ans;
    }
