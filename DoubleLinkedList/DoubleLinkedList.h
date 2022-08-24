#ifndef __DOUBLELINKLIST_H__
#define __DOUBLELINKLIST_H__
#include <iostream>

template<class T>
struct Node {
	T data;
	Node* pre;
	Node* next;
};

template<class T>
class DoubleLinkList {
public:
	DoubleLinkList();
	bool isEmpty() { return headNode->next== nullptr; }
	Node<T>* getNode(int index);
	int size() const { return m_size; }
	void insert(int data, int index);
	void traversal();
	void remove(int index);
	T front();
	T back();
	void push_back(const T& value);
	void push_front(const T&value);
private:  
	Node<T>* createNewNode();
private:
	Node<T>* headNode;
	int m_size;
};

#endif
