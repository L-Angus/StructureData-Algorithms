//
// Created by 李顺东 on 2022/9/13.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
#define MAXSIZE 20

#define FULLSTACK -1
#define OK 0
#define EMPTYSTACK -100

struct sqStack{
    int data[MAXSIZE];
    int top;
};

class Stack {
public:
    Stack(){}
    ~Stack(){}

    void InitStack(sqStack* S);
    int Push(sqStack *S, int e);
    int StackLength(sqStack *S) { return StackSize; }
    int Pop(sqStack* S);
    int Show(sqStack *S);
    bool StackEmpty(sqStack* S);
    int GetTop(sqStack *S);
    void ClearStack(sqStack* S);
    void DestoryStack(sqStack *S);
private:
    int StackSize;
};


#endif//STACK_STACK_H
