class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      int n{}, carry{};
      while(numBottles > 0 || carry >= numExchange){
        n += numBottles;
        int tmp = (numBottles + carry) % numExchange;
        numBottles = (numBottles + carry) / numExchange;
        carry = tmp;
      }
      return n;
    }
};
