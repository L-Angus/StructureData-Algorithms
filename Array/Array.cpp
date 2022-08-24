#include "Array.h"
#include <iostream>

template<class Type>
void Array<Type>::getArray() {
    elem = new Type[Arraysize];
    if (elem == 0) {
        Arraysize = 0;
        throw std::logic_error("Memory Allocation Error");
    }
}

template<class Type>
Array<Type>::Array(int sz) {
    if (sz <= 0) {
        Arraysize = 0;
        throw std::logic_error("Invalid array size.");
    }
    Arraysize = sz;
    getArray();
}

template<class Type>
Array<Type>::Array(const Array<Type>& x) {
    auto n = Arraysize = x.Arraysize;
    elem = new Type[n];
    if (elem == 0) {
        Arraysize = 0;
        throw std::logic_error("Memory Allocation Error");
    }
    Type* srcptr = x.elem;
    Type* destptr = elem;
    while (n--) {
        *destptr++ = *srcptr++;
    }
}

template<class Type>
Type& Array<Type>::operator[](int i) {
    if (i < 0 || i > Arraysize - 1) {
        throw std::runtime_error("Out Of Range");
    }
    return elem[i];
}
