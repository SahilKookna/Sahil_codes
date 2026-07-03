class Solution {
public:
    vector<int> previousSmallerElement(vector<int>& arr){
        stack<int>st;
        vector<int>ans(arr.size(),-1);
        int previousSmaller;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                previousSmaller=-1;
            }
            else{
                previousSmaller=st.top();
            }
            ans[i]=previousSmaller;
            st.push(i);
        }
        return ans;
    }

    vector<int> nextSmallerElement(vector<int>& arr){
        stack<int> st;
  
        int nextGreater;
        
        vector<int>ans(arr.size(),-1);
        for (int i = arr.size()-1; i >= 0; i--) {
            

    // 1. Chhote elements hatao
    while (!st.empty() && arr[st.top()] >= arr[i]) {
        st.pop();
    }

    // 2. Answer decide karo
    if (st.empty()){  
           nextGreater = -1;      
    }
       
    else
        nextGreater = st.top();

    // 3. Map me store karo
    
      ans[i] = nextGreater;
    
    

    // 4. Current element push karo
    st.push(i);
    }
    
    return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        vector<int>pse=previousSmallerElement(arr);
        vector<int>nse=nextSmallerElement(arr);
        long long sum=0;
       for(int i=0;i<arr.size();i++){
        int p=pse[i];
        int n=nse[i];
        if(n==-1){
            n=arr.size();
        }
        long long contribution = 1LL * arr[i] * (i - p) * (n - i);
            //sum=sum + arr[i] * (i - p) * (n - i);
            sum = (sum + contribution) % MOD;
       }
       return sum;
    }
};