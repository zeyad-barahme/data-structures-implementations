#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;

    void resize() {
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }

public:
    DynamicArray() {
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void push(int value) {
        if (size == capacity) {
            resize();
        }
        arr[size++] = value;
    }

    void pop() {
        if (size > 0) {
            size--;
        }
    }

    int get(int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        throw out_of_range("Index out of bounds");
    }

    int getSize() {
        return size;
    }

    void print() {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    DynamicArray da;

    da.push(10);
    da.push(20);
    da.push(30);

    da.print();

    da.pop();
    da.print();

    cout << "Element at index 0: " << da.get(0) << endl;

    return 0;
}
