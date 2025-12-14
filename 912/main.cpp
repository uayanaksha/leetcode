class Solution {
public:

    int partition(vector<int>& v, int l, int r){
        srand(time(0));
        int idx = l + rand() % (r-l+1);
        int p = v[idx], i = l-1, j = l, tmp;
        tmp = v[idx];
        v[idx] = v[r];
        v[r] = tmp;
        while(j < r){
            if(v[j] < p){
                ++i;
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }   ++j;
        }   ++i;
        tmp = v[i];
        v[i] = v[r];
        v[r] = tmp;
        return i;
    }
    void _sort(vector<int>& v, int l, int r){
        if(l>=r) return;
        int p = partition(v, l, r);
        _sort(v, l, p-1);
        _sort(v, p+1, r);
    }
    vector<int> sortArray(vector<int>& nums) {
        _sort(nums, 0, nums.size()-1);
        return nums;
    }
};
