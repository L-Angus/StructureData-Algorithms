#include <iostream>
#include "Stack.h"
int main() {
    sqStack *s = new sqStack;
    Stack st;
    st.InitStack(s);
    st.Push(s, 10);
    st.Push(s, 20);
    st.Show(s);
//    std::cout << st.size(s) << std::endl;
//    auto num = st.Pop(s);
//    std::cout << st.size(s) << std::endl;
//    std::cout << num << std::endl;
    return 0;
}
