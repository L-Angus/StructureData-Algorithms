/*************************************************************************
    > File Name: main.cpp
    > Author: angus.li
    > Mail: lsd15651008321@163.com
    > Created Time: 三  8/24 20:54:45 2022
 ************************************************************************/

#include "DoubleLinkedList.h"

template<class T>
DoubleLinkList<T>::DoubleLinkList(){
    headNode = createNewNode();
    m_size = 0;
}

template<class T>
Node<T>* DoubleLinkList<T>::createNewNode(){
    Node<T>* newnode = new Node<T>;
    return newnode;
}

template<class T>
T DoubleLinkList<T>::front(){
    Node<T>* curr = headNode;
    if(!curr->pre && curr->next) return headNode->next->data;
    return T();
}

template<class T>
T DoubleLinkList<T>::back(){
    Node<T>* curr = headNode;
    while(curr->next){
        curr = curr->next;
    }
    return curr->data;
}

template<class T>
void DoubleLinkList<T>::pop_front(){
    if(headNode){
        if(headNode->next == nullptr){
            delete headNode;
            headNode = nullptr;
        }else{
            Node<T>* temp = headNode->next;
            headNode = temp->next;
            delete temp;
            temp = nullptr;
        }
    }
    m_size--;
}

template<class T>
void DoubleLinkList<T>::pop_back(){
    Node<T>* newnode = headNode;
    while(newnode->next){
        newnode = newnode->next;
    }
    newnode->pre->next = nullptr;
    delete newnode;
    newnode = nullptr;
    m_size--;
}

template<class T>
void DoubleLinkList<T>::push_back(const T& value){
    Node<T>* p = new Node<T>;
    p->data = value;
    p->next = nullptr;
    if(headNode == nullptr){
        headNode = p;
        p->pre = nullptr;
    }else{
        Node<T>* curr = headNode;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = p;
        p->pre = curr;
    }
    m_size++;
}

template<class T>
void DoubleLinkList<T>::push_front(const T&value){
    Node<T>* p = new Node<T>;
    if(headNode ==nullptr){
        p->data = value;
        headNode = p;
        headNode->next = nullptr;
        headNode->pre = nullptr;
    }else{
        Node<T>* curr = new Node<T>;
        curr->data = value;
        curr->next = headNode->next;
        curr->pre = headNode;
        headNode->next = curr;
        headNode->pre = nullptr;
    }
    m_size++;
}

template<class T>
void DoubleLinkList<T>::traversal(){
    Node<T>* curr = headNode;
    while(curr){
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

int main()
{
    DoubleLinkList<std::string> dblist;
    dblist.push_back("hello");
    dblist.push_back("dblist");
    dblist.push_back("hello1");
    dblist.push_back("dblist1");
    dblist.push_front("1");
    dblist.push_front("2");
    dblist.push_front("3");
    dblist.push_front("4");
    dblist.traversal();
    dblist.pop_front();
    dblist.traversal();
    dblist.pop_back();
    dblist.traversal();
    // std::cout << dblist.front() << std::endl;
    // std::cout << dblist.back() << std::endl;
    return 0;
}
