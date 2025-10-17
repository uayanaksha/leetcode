// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      long start = 1, end = n-1, mid, curr = n;
      while(start <= end){
        mid = start + (end - start)/2;
        if(isBadVersion(mid)){
          curr = mid;
          end = mid - 1;
        } else {
          start = mid + 1;
        }
      }
      return curr;
    }
};
