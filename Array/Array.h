#ifndef __ARRAY_H_
#define __ARRAY_H_
template<class Type>
class Array {
private:
    Type* elem;
    int Arraysize;
    void getArray();
public:
    Array(int size);
    Array(const Array<Type>& x);
    ~Array() { delete[]elem; }
    Array<Type>& operator=(const Array<Type>& A);
    Type& operator[](int i);
    Type* operator*() const { return elem; }
    int Length() const { return Arraysize; }
    void ReSize(int sz);
};


#endif //!__ARRAY_H_