#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size, capacity;
    int* arr;

public:
    Queue(int cap) {
        capacity = cap;
        front = 0;
        size = 0;
        rear = capacity - 1;
        arr = new int[capacity];
    }

    ~Queue() {
        delete[] arr;
    }

    bool isFull() {
        return (size == capacity);
    }

    bool isEmpty() {
        return (size == 0);
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();

    q.dequeue();
    q.print();

    cout << "Front element: " << q.getFront() << endl;

    return 0;
}
