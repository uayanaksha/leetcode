class Solution {
public:
    using vs = vector<string>;
    vs findRestaurant(vs& list1, vs& list2) {
        vs v;
        int maxsum = list1.size() + list2.size();
        for(int i{}; i<list1.size(); ++i){
            for(int j{}; j<list2.size(); ++j){
                int sum = i+j;
                if(sum > maxsum || list1[i] != list2[j]) continue;
                if(sum < maxsum) { v.clear(); }
                maxsum = sum;
                v.push_back(list1[i]);
            }
        }
        return v;
    }
};
