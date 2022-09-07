#include <iostream>
#include "LinkList.h"

int main()
{
    LinkList ll;
    //ll.CreateLinkList_H(1);
    ll.CreateLinkList_R(5);
    ll.Display();
    // // std::cout << "size: " << ll.Length() << std::endl;
    // auto rev = ll.ReverseList();
    // ll.Display(rev);
    auto head = ll.deleteNnode(5);
    ll.Display(head);
    return 0;
}