class Solution {
public:
    string smallestSubsequence(string s) {
        
        stack<char>st;
        map<char,int>mpp;
       bool present[26] = {false};
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if (present[s[i]-'a']) {
                mpp[s[i]]--;
                continue;   // bas skip, stack ko touch mat karo
            }
            else if(st.empty()){
                st.push(s[i]);
                mpp[s[i]]--;
                present[s[i] - 'a']=true;
            }
            else if(st.top()>s[i]){
                while(!st.empty() && st.top()>s[i] && mpp[st.top()]>0){
                    present[st.top()-'a']=false;
                    st.pop();
                }
                // if(!present[s[i] - 'a']){
                    st.push(s[i]);
                  present[s[i] - 'a']=true;
                    mpp[s[i]]--;
                // }
                // else{
                //     mpp[s[i]]--;
                // }
            }
            else{
                // if(!present[s[i] - 'a']){
                    st.push(s[i]);
                    present[s[i] - 'a']=true;
                    mpp[s[i]]--;
                // }
                // else{
                //     mpp[s[i]]--;
                // }
                
            }
        }
        int n=st.size();
        string ans(n,'a');
        while(!st.empty()){
            ans[n-1]=st.top();
            n--;
            st.pop();
        }

        return ans;

    }
};