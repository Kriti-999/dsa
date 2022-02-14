//Problem Link:-https://leetcode.com/problems/number-of-good-ways-to-split-a-string/
class Solution {
public:
    int numSplits(string s) {
        int n=s.length();
        vector<int>left(n),right(n);
        unordered_set<char>st;
        int c=0;
        for(int i=0;i<s.length();i++){
            st.insert(s[i]);
            left[i]=st.size();
        }
        st.clear();
        for(int i=s.length()-1;i>=0;i--){
            st.insert(s[i]);
            right[i]=st.size();
        }
        for(int i=0;i<n-1;i++){
            if(left[i]==right[i+1]){
                c++;
            }
        }
        return c;
        
    }
};