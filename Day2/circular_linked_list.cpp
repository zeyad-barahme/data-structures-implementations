#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* last;

public:
    CircularLinkedList() : last(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!last) {
            last = newNode;
            last->next = last;
            return;
        }
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }

    void deleteNode(int val) {
        if (!last) return;

        Node* curr = last->next;
        Node* prev = last;

        do {
            if (curr->data == val) {
                if (curr == last && curr->next == last) {
                    delete curr;
                    last = nullptr;
                    return;
                }

                prev->next = curr->next;
                if (curr == last) {
                    last = prev;
                }
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        } while (curr != last->next);
    }

    void print() {
        if (!last) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = last->next;
        cout << "Circular List: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != last->next);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.print();

    cll.deleteNode(20);
    cll.print();

    return 0;
}
