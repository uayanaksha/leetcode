class Solution {
public:
    string sum(string nums1, string nums2){
        int a = nums1.size()-1;
        int b = nums2.size()-1;
        int c = 0;
        string res;
        while(a >= 0 && b >= 0){
            int x = (nums1[a--] + nums2[b--] + c - '0' - '0');
            int n = x % 10;
            c = x / 10;
            res = (char)(n + '0') + res;
        }
        while(a >= 0){
            int x = (nums1[a--] - '0' + c);
            int n = x % 10;
            c = x / 10;
            res = (char)(n + '0') + res;
        }
        while(b >= 0){
            int x = (nums2[b--] - '0' + c);
            int n = x % 10;
            c = x / 10;
            res = (char)(n + '0') + res;
        }
        while(c){
            res = (char)((c % 10) + '0') + res;
            c /= 10;
        }
        return res;
    }

    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        int b = num2.size()-1;
        string res;
        while(b >= 0){
            int a = num1.size()-1;
            int c = 0;
            string r;
            for(int i=b+1; i<num2.size(); ++i){
                r += '0';
            }
            while(a >= 0){
                int x = (num1[a] - '0')*(num2[b] - '0');
                int n = (x + c) % 10;
                c = (x + c) / 10;
                r = (char)(n + '0') + r;
                a--;
            }
            while(c){
                r = (char)((c % 10) + '0') + r;
                c /= 10;
            }
            res = sum(res, r);
            b--;
        }
        return res;
    }
};
