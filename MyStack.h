#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
#include <stdexcept>

template <typename T>
class MyStack {
private:
    // Nested template class for stack nodes
    template <typename U>
    class MyListNode {
    private:
        U value;
        MyListNode<U>* next;

    public:
        // Constructor
        MyListNode(U val) : value(val), next(nullptr) {}

        // Get the node's value
        U getValue() const {
            return value;
        }

        // Set the next pointer
        void setNext(MyListNode<U>* nextNode) {
            next = nextNode;
        }

        // Get the next node
        MyListNode<U>* getNext() const {
            return next;
        }
    };

    MyListNode<T>* head;  // Pointer to the top node

public:
    // Constructor
    MyStack() : head(nullptr) {}

    // Destructor
    ~MyStack() {
        while (!empty()) {
            pop();
        }
    }

    // Check if stack is empty
    bool empty() const {
        return head == nullptr;
    }

    // Get the top element
    T top() const {
        if (empty()) {
            throw std::logic_error("Stack is empty\n");
        }
        return head->getValue();
    }

    // Remove the top element
    void pop() {
        if (empty()) {
            throw std::logic_error("Stack is empty\n");
        }
        MyListNode<T>* temp = head;
        head = head->getNext();
        delete temp;
    }

    // Add a new element to the top
    void push(T value) {
        MyListNode<T>* newNode = new MyListNode<T>(value);
        newNode->setNext(head);
        head = newNode;
    }
};

#endif // MYSTACK_H
