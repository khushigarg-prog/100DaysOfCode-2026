#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR_all = 0; //intialize xor of all = 0
        int n = nums.size();
        for(int i=0; i<=n; i++){
            XOR_all = XOR_all^i;
        }
        for(int num: nums){
            XOR_all = XOR_all^num;
        }
        return XOR_all;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1}; // Example input
    cout << sol.missingNumber(nums) << endl; 
    return 0;
}