class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        int m=(1<<k) | n;
        return m;
    }
};
