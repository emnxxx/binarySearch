#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int search(vector<int>& nums, int target){
    int low = 0; int last = nums.size() - 1;
    int ans = -1;
    while (low <= last) {
        int mid = (low + last) / 2;
        if (nums[mid] >= target) {
            if (nums[mid] == target) ans = mid;
            last = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;
    cout << search(nums, target);
}