#include <iostream>
#include "Stack.h"
int main() {
    sqStack *s = new sqStack;
    Stack st;
    st.InitStack(s);
    st.Push(s, 10);
    st.Push(s, 20);
//    st.Show(s);
//    std::cout << st.size(s) << std::endl;
//    auto num = st.Pop(s);
//    std::cout << st.size(s) << std::endl;
//    std::cout << num << std::endl;
//    std::cout << (st.StackEmpty(s) == 0 ? "false" :"true")  << std::endl;
//    std::cout << "栈顶元素：" << st.GetTop(s) << std::endl;
//    std::cout << "栈的长度：" << st.StackLength(s) << std::endl;
    st.ClearStack(s);
//    st.Show(s);
//    std::cout << st.StackLength(s) << std::endl;
    st.DestoryStack(s);
//    st.Show(s);
//    std::cout << s->data[0] << std::endl;
    return 0;
}
