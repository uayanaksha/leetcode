class Solution {
public:
    string simplifyPath(string path) {
        const int n = path.size();
        vector<string> v;
        string s, r;
        for (int i{}; i <= n; ++i) {
            char c = i == n ? '/' : path[i];
            if (c != '/')
                s += c;
            else {
                if (s == "." || s == "") {} 
                else if (s.compare("..") == 0) { if (v.size() > 0) v.pop_back(); }
                else v.push_back(s);
                s = "";
            }
        }
        r = accumulate(v.begin(), v.end(), string(""), [](const string &a, const string &b){
            return a + "/" + b;
        });
        if(r == "") r = "/";
        return r;
    }
};
