#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class StackLinkedList {
private:
    Node* top;

public:
    StackLinkedList() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node{value, top};
        top = newNode;
    }

    void pop() {
        if (!top) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (!top) {
            throw out_of_range("Stack is empty");
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void print() {
        Node* temp = top;
        cout << "[ ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "]" << endl;
    }
};

int main() {
    StackLinkedList stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.print();

    stack.pop();
    stack.print();

    cout << "Top element: " << stack.peek() << endl;

    return 0;
}
