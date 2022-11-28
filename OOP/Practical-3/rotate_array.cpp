#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    if (!nums.empty()) {
        k %= nums.size();
        reverse(nums.begin(), nums.begin() + nums.size() - k);
        reverse(nums.begin() + nums.size() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
}

void printArray(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7 };
    rotate(nums, 3);
    printArray(nums);
    return 0;
}