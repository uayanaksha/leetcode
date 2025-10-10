class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int ptr = n-1;
        int carry{};
        digits[ptr]++;
        carry = digits[ptr]/10;
        digits[ptr]=digits[ptr]%10;
        while(ptr > 0 && carry > 0){
          ptr--;
          digits[ptr]+=carry;
          carry = digits[ptr]/10;
          digits[ptr]=digits[ptr]%10;
        }
        if(carry>0){
          vector<int> v(1, carry);
          for(int i: digits){
            v.push_back(i);
          }
          digits.swap(v);
        }
        return digits;
    }
};
