class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumOfDigits = 0;
        int sumOfElements = 0;
        for(int i{}; i<nums.size();++i){
            sumOfElements += nums[i];
            while(nums[i]){
                int r = nums[i]%10;
                sumOfDigits += r;
                nums[i] /= 10;
            }
        }
        int r = (sumOfElements > sumOfDigits) 
            ? sumOfElements - sumOfDigits
            : sumOfDigits - sumOfElements;
        return r;
    }
};
