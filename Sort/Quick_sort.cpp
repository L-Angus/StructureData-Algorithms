#include <iostream>
#include <vector>

void quick_sort(std::vector<int> &nums, int l, int r){
    int first = l;
    int last = r-1;
    auto key = nums[first];
    while(first < last){
        while(first < last && nums[last] >= key) {
            last--;
        }
        nums[first] = nums[last];
        while(first < last && nums[first] <= key) {
            first++;
        }
        nums[last] = nums[first];
    }
    nums[first] = key;
    quick_sort(nums, l, first);
    quick_sort(nums, first+1, r);
}

// void QuickSort(std::vector<int>& nums){
//     quick_sort(nums, 0, nums.size());
// }


int main()
{
    std::vector<int> data = {34,66,2,5,95,4,46,27};
    // QuickSort(data);
    quick_sort(data, 0, data.size());
    for(auto &d : data){
        std::cout << d << " ";
    }
    std::cout << std::endl;
    return 0;
}