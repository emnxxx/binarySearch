#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0;
    int last = nums.size() - 1;

    while (low <= last)
    {
        int mid = (low + last) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) low = mid + 1;
        else last = mid - 1;
    }
    return -1;
}

int main () {
    vector<int>nums = {1, 3, 5, 7, 9, 10};
    int target = 5;
    cout << search(nums, target);

}