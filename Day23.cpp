Q.387. First Unique Character in a
link-->https://leetcode.com/problems/first-unique-character-in-a-string/description/
code-->int firstUniqChar(string s) {

        map<char, int> freq;
        for(auto ch : s){
            freq[ch]++;
        }
        for(int i=0; i<s.size(); i++){
            if(freq[s[i]] == 1) return i;
        }
        return -1;
    
    }
