#include <iostream>
#include <vector>
#include <algorithm>

int binary_search(std::vector<int>& nums, int target) {
    if (nums.size() == 1 && nums[0] == target) return 0;
    std::sort(nums.begin(), nums.end());
    auto left = 0;
    auto right = nums.size() - 1;
    while (left < right) {
        auto mid = (left + right) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] > target)
            right = mid;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    std::vector<int> nums = { 5 };
    auto res = binary_search(nums, 5);
    std::cout << res << std::endl;

    return 0;
}