
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
    void CreateLinkList_R(int n);
    void CreateLinkList_H(int n);
    bool ListInsert(int pos, int elem);
    bool ListDelete(int pos);
    int GetElem(int pos);
    int Find(int elem);
    void Display();
    void Display(Node* node);
    int Length() const { return m_size; }
    bool Empty();
    // void ReverseList();
    Node* ReverseList();
private:
    Node* find(int pos);
    int m_size;
    Node* m_head;
};
