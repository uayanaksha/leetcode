class Solution {
public:
    int helper(int x){
      int ctr{};
      while(x > 0){
        int digit = x % 10;
        ctr += (digit*digit);
        x /= 10;
      }
      return ctr;
    }
    bool isHappy(int n) {
      int slow = n, fast = n;
      do {
        slow = helper(slow);
        fast = helper(fast);
        fast = helper(fast);
      } while(slow != fast);
      return slow == 1;
    }
};
