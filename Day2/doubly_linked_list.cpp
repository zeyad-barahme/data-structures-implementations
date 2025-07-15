#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int val) {
        if (!head) return;

        Node* temp = head;

        while (temp && temp->data != val) {
            temp = temp->next;
        }

        if (!temp) return;

        if (temp->prev) {
            temp->prev->next = temp->next;
        } else {
            head = temp->next;
        }

        if (temp->next) {
            temp->next->prev = temp->prev;
        }

        delete temp;
    }

    void printForward() {
        Node* temp = head;
        cout << "Forward: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printBackward() {
        if (!head) return;
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        cout << "Backward: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.printForward();
    dll.printBackward();

    dll.deleteNode(20);
    dll.printForward();
    dll.printBackward();

    return 0;
}
