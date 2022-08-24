#include <iostream>
#include <string>
#include <algorithm>

std::string reverseStr(std::string s, int k) {
    std::string rev_str = s.substr(0, k);
    std::reverse(rev_str.begin(), rev_str.end());
    rev_str.append(s.substr(k));
    return rev_str;
}

int main()
{
    std::string s = "abcdefg";
    int k = 2;
    auto str = reverseStr(s, k);
    std::cout << str << std::endl;
    s = "abcd";
    std::cout << reverseStr(s, k) << std::endl;
    return 0;
}