class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st ;
        for(auto i : tokens){
            if(i.size()==1 and !isdigit(i[0])){
                int n2 = st.top();
                 st.pop();
                int n1 = st.top();
                 st.pop();

                switch(i[0]){
                     case '+': st.push(n1+n2); break;
                     case '-': st.push(n1-n2); break;
                     case '*': st.push(n1*n2); break;
                     case '/': st.push(n1/n2); break;
                }
            }
            else {
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};