class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char x:s){
            if((st.size()>0 ) && ((st.top()=='(' && x==')') || (st.top()=='{' && x=='}') ||(st.top()=='[' && x==']'))) st.pop();
            else{
                st.push(x);
            }
        }
        if(st.size()==0) return true;
        else return false;
    }
};
