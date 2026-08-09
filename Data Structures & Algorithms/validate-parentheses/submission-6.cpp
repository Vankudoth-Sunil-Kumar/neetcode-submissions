class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        if(n<2) return false;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return false;
                if(s[i]==')') {
                    if(st.top()!='(') return false;
                    st.pop();
                }
                 else if(s[i]=='}') {
                    if(st.top()!='{') return false;
                    st.pop();
                }
                 else if(s[i]==']') {
                    if(st.top()!='[') return false;
                    st.pop();
                }
            }
        }
        if(st.size()!=0) return false;
        return true;;
    }
};
