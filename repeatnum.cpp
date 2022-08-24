#include <iostream>
#include <vector>
#include <algorithm>


int findRepeatNum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1]) return nums[i];
    }
    return -1;
}

int main()
{
    std::vector<int> nums = { 3,4,2,1,1,0 };
    auto num = findRepeatNum(nums);
    std::cout << num << std::endl;
    return 0;
}