// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

#include <iostream>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while(n > 0){
            sum += n%10;
            product *= n%10;
            n /= 10;
        }
        return product - sum;
    }
};