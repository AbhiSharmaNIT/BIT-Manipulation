#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dd, int div) {
        if (dd == INT_MIN && div == -1) {
            return INT_MAX;
        }

        long int ans = dd / div;

        if (ans > INT_MAX) {
            return INT_MAX;
        }

        if (ans < INT_MIN) {
            return INT_MIN;
        }

        return ans;
    }
};