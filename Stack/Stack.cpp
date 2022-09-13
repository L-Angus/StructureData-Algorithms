//
// Created by 李顺东 on 2022/9/13.
//
#include <iostream>
#include "Stack.h"

void Stack::InitStack(sqStack *S) {
    S = new sqStack();
    S->top = -1;
    StackSize = S->top + 1;
}

int Stack::Push(sqStack *S, int e) {
    if(S->top == MAXSIZE -1){
        return FULLSTACK;
    }
    S->top++;
    S->data[S->top] = e;
    StackSize++;
    return OK;
}

int Stack::Pop(sqStack *S) {
    if(S->top == -1)
        return EMPTYSTACK;
    auto e = S->data[S->top];
    S->top--;
    StackSize--;
    return e;
}

int Stack::Show(sqStack *S) {
    if(S->top == -1)
        return EMPTYSTACK;
    while (StackSize > 0){
        std::cout << S->data[S->top--] << " ";
        StackSize--;
    }
    std::cout << std::endl;
    return OK;
}

bool Stack::StackEmpty(sqStack *S) {
    if (S->top == -1) return true;
    return false;
}

int Stack::GetTop(sqStack *S) {
    if (S->top == -1){
        return EMPTYSTACK;
    }
    auto e = S->data[S->top];
    return e;
}

void Stack::ClearStack(sqStack *S) {
    if(S->top == -1) return;
    while (S->top != -1){
        auto e = S->data[S->top];
        S->top--;
        StackSize--;
    }
}

void Stack::DestoryStack(sqStack *S) {
    if (!S) return;
    delete S;
    S = NULL;
}