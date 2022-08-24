## 数据结构与算法

### 数组

数组是用来存放一系列相同类型对象的数据结构。

1. 线性结构；
2. 除了第一个元素，每个元素都有唯一的前驱和后继；



### 链表

链表是一种通过指针串联在一起的线性结构，每一个节点是由两部分组成，一个是数据域一个是指针域（存放指向下一个节点的指针），最后一个节点的指针域指向null（空指针的意思）。

相同类型的数据元素组成的有限序列，它是最基本、最常用的一种线性结构。

单向链表，每个节点有一个next指针指向后一个节点，还有一个成员变量用以存储数值。（指针域和数据域）

双向链表，还有一个prev指针指向前一个节点。

**初始化：**

```c++
template<typename T>
struct Node{
  T data;
  Node<T>* next;
};
```

创建：

取值：

查找：

插入：

删除：

### 2. 串

串的内部元素为字符。


