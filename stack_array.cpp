#include <iostream>
using namespace std;

class StackArray {
private:
    int* arr;
    int top;
    int capacity;

public:
    StackArray(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~StackArray() {
        delete[] arr;
    }

    void push(int value) {
        if (top < capacity - 1) {
            arr[++top] = value;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        throw out_of_range("Stack is empty");
    }

    bool isEmpty() {
        return top == -1;
    }

    void print() {
        cout << "[ ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    StackArray stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.print();

    stack.pop();
    stack.print();

    cout << "Top element: " << stack.peek() << endl;

    return 0;
}
