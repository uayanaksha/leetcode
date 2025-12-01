class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        using ll = long long;
        ll total{}, l = static_cast<long long>(1e9);
        for(int battery: batteries){
            total += battery;
            l = min((int)l, battery);
        }
        ll r = total/n, x{};
        while(l<=r){
            ll m = (l+r)>>1;
            ll reserve = 0;
            for(int battery: batteries){
                reserve += min((ll)battery, m);
            }
            if(reserve < m*n){ 
                r = m-1; 
            } 
            else {
                x = m;
                l = m+1;
            }
        }
        return x;
    }
};
