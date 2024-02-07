Q.344. Reverse String
link-->https://leetcode.com/problems/reverse-string/description/
code->    void reverseString(vector<char>& s) {
     int st=0;
     int e= s.size()-1;
     while(st<e){
         swap(s[st++] , s[e--]);
     }   
    }
