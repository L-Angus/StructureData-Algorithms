#include <iostream>
#include <vector>
/*
1. 比较相邻两个元素的大小，如果第一个比第二个大（小），交换；
2. 对每一对做相同的操作，从第一对到最后一对，这样最后的元素应该是最大（小）的；
3. 重复以上操作，直到排序完成。
*/
template<typename T>
void Swap(T &a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

void BubbleSort(std::vector<int>& nums){
    if(nums.size() < 1) return;
    for(int i = 0; i < nums.size(); ++i){
        for(int j = 0; j<i; ++j){
            if(nums[i] < nums[j]){
                Swap(nums[i], nums[j]);
            }
        }
    }
}

int main()
{
    std::vector<int> data = {34,66,2,5,95,4,46,27};
    BubbleSort(data);
    for(auto &d : data){
        std::cout << d << " ";
    }
    std::cout << std::endl;

    return 0;
}