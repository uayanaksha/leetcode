class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> v;
        if (nums.size() < 2) {
            if (nums.size() == 1) {
                v.push_back(to_string(nums.back()));
            }
            return v;
        }
        pair<long, long> p;
        for (int i = 0; i < n;) {
          p.first = nums[i];
          p.second = nums[i];
          while(i<n&&p.second == nums[i]){
            p.second = p.second + 1;
            ++i;
          }
          p.second = nums[i-1];
          if(p.first == p.second){
            v.push_back(to_string(p.first));
          } else {
            string s = format("{}->{}", p.first, p.second);
            v.push_back(s);
          }
        }
        return v;
    }
};
