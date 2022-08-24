#include <iostream>

std::string replaceSpace(std::string s) {
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ') {

        }
    }

    return s;
}

int main()
{
    std::string s = "we are happy";
    auto str = replaceSpace(s);
    std::cout << str << std::endl;
    return 0;
}