link : https://leetcode.com/problems/powx-n/discuss/739646/C%2B%2B-Iterative-vs.-Recursive-Bitwise-Solutions-Explained-100-Time-80-space

class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
        }
        return res;
    }
};