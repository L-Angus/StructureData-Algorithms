#include <iostream>
#include <vector>

template<typename T>
void Swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
inline void print(T& container) {
    for (auto c : container) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
}

template<typename T>
void Bibble_Sort(std::vector<T>& nums) {
    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            if (nums[i] < nums[j]) {
                Swap<int>(nums[i], nums[j]);
            }
        }

    }
    // std::cout << std::endl;
}



int main()
{
    std::vector<int> vec = { 6, 8, 11, 4, 2, 1 };
    print<std::vector<int>>(vec);
    Bibble_Sort<int>(vec);
    std::cout << "============" << std::endl;
    print<std::vector<int>>(vec);

    return 0;
}