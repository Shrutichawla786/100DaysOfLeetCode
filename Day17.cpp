Q.58. Length of Last Word
link-->https://leetcode.com/problems/length-of-last-word/description/
code-->int lengthOfLastWord(string s) {
        int n= s.length()-1;
        while(n>=0 && s[n]==' '){
            n--;
            
        }
        int i=n;
        while(n>=0 && s[n]!=' '){
            n--;
        }
        return i-n;

    }
