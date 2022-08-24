#include <iostream>
#include "LinkList.h"

int main()
{
    LinkList ll;
    ll.CreateLinkList_H(5);
    ll.Display();
    // std::cout << "size: " << ll.Length() << std::endl;
    auto rev = ll.ReverseList();
    ll.Display(rev);
    return 0;
}