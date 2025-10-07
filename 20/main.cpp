#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> mem;
        bool signal = true;
        for(char c: s){
          switch (c) {
            case ')':
              if(mem.empty() || mem.back() != '('){
                signal = false;
              } else {
                mem.pop_back();
              } break;
            case '}':
              if(mem.empty() || mem.back() != '{'){
                signal = false;
              } else {
                mem.pop_back();
              } break;
            case ']':
              if(mem.empty() || mem.back() != '['){
                signal = false;
              } else {
                mem.pop_back();
              } break;
            default:
              mem.push_back(c);
          }
          if(!signal) break;
        }
        return mem.empty() && signal;
    }
};
