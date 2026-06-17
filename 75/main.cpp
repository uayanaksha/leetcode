class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v(301, 0);
        for(int i{}; i<nums.size(); ++i){
            v[nums.at(i)]++;
        }
        for(int i=0, j=0; i<=300; ++i){
            if(v[i] == 0) continue;
            while(v[i]--){
                nums[j++] = i;
            }
        }
    }
};
