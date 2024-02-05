Q.84. Largest Rectangle in Histogram

link-->https://leetcode.com/problems/largest-rectangle-in-histogram/description/
code-->
  vector<long long > nextSmallerElement(vector<int>& arr, int n){
         // Your code goes here
        vector<long long>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=n-1;i>=0;i--){
            while(s.top()!=-1 && !s.empty() && arr[i]<=arr[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                ans[i]=s.top();
            }
            s.push(i);
        }
        return ans;
        
    }
    
    vector<long long>prevSmallerElement(vector<int>& arr, int n){
        vector<long long>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=0;i<n;i++){
            while(s.top()!=-1 && !s.empty() && arr[i]<=arr[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                ans[i]=s.top();
            }
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        vector<long long>next(n);
        next = nextSmallerElement(heights , n);
        
        vector<long long>prev(n);
        prev = prevSmallerElement(heights ,n);
        
        long long area= INT_MIN;
        for(int i=0;i<n;i++) {
            if(next[i]==-1){
                next[i]=n;
            }
            long long  newarea= heights[i]*(next[i]-prev[i]-1);
            
            area = max(area , newarea);
        }
        return area;
        
    }
