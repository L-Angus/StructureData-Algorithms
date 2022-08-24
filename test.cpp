#include <iostream>
#include <string>
#include <algorithm>
#include <type_traits>
#include <vector>
// 回文字符串
char isNotRepeat(std::string s) {
    // std::vector<char> vec(s.begin(), s.end());
    // std::count
    auto iter = std::find_if(s.begin(), s.end(), [&](char ch) {return std::count(s.begin(), s.end(), ch) == 1; });
    return *iter;
}


int main() {
    //    std::cout << "Hello, World!" << std::endl;
    std::string s = "abbbabcd";
    auto ch = isNotRepeat(s);
    std::cout << ch << std::endl;
    // std::cout << isPlindrome(s) << std::endl;
    return 0;
}
