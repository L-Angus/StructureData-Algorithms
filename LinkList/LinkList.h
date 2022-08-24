
// template<typename T>
struct Node
{
    int data;
    Node* next;
};

// template<class T>
class LinkList {
public:
    LinkList();
    ~LinkList();
    bool ListInsert(int pos, int elem);
    bool ListDelete(int pos);
    void deleteList(Node* node);
    int GetElem(int pos);
    int Find(int elem);
    void Display();
    int Length() const { return m_size; }
    bool Empty();
    void ReverseList();
private:
    Node* find(int pos);
    int m_size;
    Node* m_head;
};
