#include "LinkList.h"
#include <iostream>

LinkList::LinkList() {
    m_head = new Node();
    m_head->next = nullptr;
    m_size = 0;
}

LinkList::~LinkList() {
    Node* p_curr = m_head->next;
    Node* temp;
    while (p_curr != nullptr) {
        temp = p_curr;
        p_curr = p_curr->next;
        delete temp;
    }
    delete m_head;
}

bool LinkList::ListInsert(int pos, int elem) {
    if (pos < 1 || pos > m_size + 1) {
        throw std::runtime_error("Inserted posistion out of range");
    }
    Node* p_curr = m_head;
    for (size_t i = 0; i < pos - 1; i++)
    {
        p_curr = p_curr->next;
    }
    Node* newnode = new Node;
    newnode->data = elem;
    newnode->next = p_curr->next;
    p_curr->next = newnode;
    m_size++;
    return true;
}

bool LinkList::ListDelete(int pos) {
    if (pos < 1 || pos > m_size + 1) {
        throw std::runtime_error("Deleted posistion out of range");
    }
    Node* p_curr = m_head;
    for (size_t i = 0; i < pos - 1; i++)
    {
        p_curr = p_curr->next;
    }
    Node* temp = p_curr->next;
    p_curr->next = temp->next;
    delete temp;
    m_size--;
    return true;
}

bool LinkList::Empty() {
    if (m_size < 1) return true;
    return false;
}

int LinkList::Find(int elem) {
    Node* p_curr = m_head;
    int i = 0;
    while (p_curr->next && p_curr->data != elem) {
        p_curr = p_curr->next;
        i++;
    }
    return i;
}

int LinkList::GetElem(int pos) {
    if (pos < 1 || pos > m_size + 1) {
        throw std::runtime_error("Position out of range");
    }
    Node* p_curr = m_head;
    for (size_t i = 0; i < pos - 1; i++)
    {
        p_curr = p_curr->next;
    }
    return p_curr->next->data;
}

void LinkList::CreateLinkList_R(int n) {
    Node* curr = m_head;
    for (size_t i = 1; i <= n; i++)
    {
        Node* newnode = new Node;
        newnode->data = i;
        curr->next = newnode;
        curr = newnode;
        m_size++;
    }
}

void LinkList::CreateLinkList_H(int n) {
    Node* curr = m_head;
    for (size_t i = 1; i <= n; i++)
    {
        Node* newnode = new Node;
        newnode->data = i;
        newnode->next = curr->next;
        curr->next = newnode;
        m_size++;
    }
}

Node* LinkList::find(int pos) {
    if (pos < 1 || pos > m_size + 1) {
        throw std::runtime_error("Position out of range");
    }
    Node* p_curr = m_head;
    for (size_t i = 0; i < pos - 1; i++)
    {
        p_curr = p_curr->next;
    }
    return p_curr;
}

// void LinkList::ReverseList() {
//     if (m_size <= 1) {
//         return;
//     }
//     Node* p_curr = m_head->next->next;
//     m_head->next->next = nullptr;
//     Node* temp;
//     while (p_curr != nullptr) {
//         temp = p_curr;
//         p_curr = p_curr->next;
//         temp->next = m_head->next;
//         m_head->next = temp;
//     }
// }
Node* LinkList::deleteNnode(int n){
    std::cout << "n = " << n << std::endl;
    int size = 0;
    Node * tmp= m_head;
    while (tmp->next){
        tmp = tmp->next;
        size++;
    }
    auto pos = size - n +1;
    if (pos < 1) return nullptr;
    Node *curr = m_head;
    for (size_t i = 0; i < pos - 1; ++i)
    {
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return m_head;
}


Node* LinkList::ReverseList() {
    Node* head = m_head;
    Node* curr = head->next->next;
    head->next->next = nullptr;
    Node* temp;
    while (curr != nullptr) {
        temp = curr;
        curr = curr->next;
        temp->next = head->next;
        head->next = temp;
    }
    return head;
}

void LinkList::Display(Node* node) {
    std::cout << "After Deleted List:" << std::endl;
    while (node->next) {
        node = node->next;
        std::cout << node->data << " ";
    }
    std::cout << std::endl;
}

void LinkList::Display() {
    std::cout << "Original Linklist: " << "\n";
    Node* p_curr = m_head;
    while (p_curr->next) {
        p_curr = p_curr->next;
        std::cout << p_curr->data << " ";
    }
    std::cout << std::endl;
}

