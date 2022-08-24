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

void LinkList::deleteList(Node* node) {
    Node* p_curr = node->next;
    node->next = p_curr->next;
    node->data = p_curr->data;
    delete node;
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

void LinkList::ReverseList() {
    if (m_size <= 1) {
        return;
    }
    Node* p_curr = m_head->next->next;
    m_head->next->next = nullptr;
    Node* temp;
    while (p_curr != nullptr) {
        temp = p_curr;
        p_curr = p_curr->next;
        temp->next = m_head->next;
        m_head->next = temp;
    }
}

void LinkList::Display() {
    Node* p_curr = m_head;
    while (p_curr->next) {
        p_curr = p_curr->next;
        std::cout << p_curr->data << " ";
    }
    std::cout << std::endl;
}

