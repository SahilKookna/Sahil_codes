class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int l=0;
        int r=k-1;
        int count=0;
        int maxi=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                count++;
                maxi=max(count,maxi);
            }
        }
        while(r<n){
            if(s[l]=='a'|| s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u'){
                count--;
                
            }
            l++;
            r++;
            if(r<n){
                if(s[r]=='a'|| s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u'){
                count++;
                 maxi=max(count,maxi);
            }
            }
        }
        return maxi;
    }
};