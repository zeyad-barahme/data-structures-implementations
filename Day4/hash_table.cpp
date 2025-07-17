#include <iostream>
#include <list>
using namespace std;

class HashTable {
    static const int SIZE = 10;
    list<int> table[SIZE];

    int hashFunction(int key) {
        return key % SIZE;
    }

public:
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (auto x : table[index]) {
            if (x == key)
                return true;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < SIZE; i++) {
            cout << i << ": ";
            for (auto x : table[i])
                cout << x << " -> ";
            cout << "NULL" << endl;
        }
    }
};

int main() {
    HashTable ht;
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    ht.insert(15);
    ht.insert(25);

    cout << "Hash Table:" << endl;
    ht.display();

    cout << "Searching 20: " << (ht.search(20) ? "Found" : "Not Found") << endl;

    ht.remove(20);
    cout << "After removing 20:" << endl;
    ht.display();

    return 0;
}
