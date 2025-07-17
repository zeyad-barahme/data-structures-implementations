#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MinHeap {
    vector<int> heap;

    void heapifyUp(int index) {
        if (index == 0) return;
        int parent = (index - 1) / 2;
        if (heap[parent] > heap[index]) {
            swap(heap[parent], heap[index]);
            heapifyUp(parent);
        }
    }

    void heapifyDown(int index) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int smallest = index;

        if (left < heap.size() && heap[left] < heap[smallest])
            smallest = left;

        if (right < heap.size() && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size() - 1);
    }

    void removeMin() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return;
        }
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    int getMin() {
        if (!heap.empty()) return heap[0];
        throw out_of_range("Heap is empty");
    }

    void display() {
        cout << "Min Heap: ";
        for (int x : heap) cout << x << " ";
        cout << endl;
    }
};

int main() {
    MinHeap mh;

    mh.insert(10);
    mh.insert(5);
    mh.insert(20);
    mh.insert(2);
    mh.insert(15);

    mh.display();

    cout << "Minimum element: " << mh.getMin() << endl;

    mh.removeMin();
    cout << "After removing min:" << endl;
    mh.display();

    return 0;
}
