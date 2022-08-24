#include <iostream>
#include "LinkList.h"

int main()
{
    LinkList ll;
    ll.ListInsert(1, 11);
    ll.ListInsert(2, 12);
    ll.ListInsert(3, 13);
    ll.ListInsert(4, 14);
    ll.ListInsert(5, 15);
    // ll.Display();
    // ll.ReverseList();
    // ll.Display();
    ll.deleteList();
    return 0;
}