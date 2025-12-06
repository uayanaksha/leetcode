class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (string &s : operations) {
            if(s == "C"){
                if (!st.empty()){
                    st.pop();
                }
            } else if (s == "D"){
                if (!st.empty())
                    st.push(st.top() * 2);
            } else if (s == "+"){
                if (st.size() > 1) {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.push(a);
                    st.push(a+b);
                }
            } else { 
                st.push(stoi(s));
            }
        }
        int sum{};
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
