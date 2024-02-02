Link-->https://leetcode.com/problems/unique-email-addresses/submissions/
Q.929. Unique Email Addresses
code-->
  int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> set;
        for (string &s: emails) {
            string temp; int i;
            for (i=0; s[i]!='@'; i++) {
                if (s[i]=='+') break;
                else if (s[i] == '.') continue;
                temp.push_back(s[i]);
            }
            while (s[i]!='@') i++;
            temp += s.substr(i);
            set.insert(temp);
        }
        return set.size();
    }
