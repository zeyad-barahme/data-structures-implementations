#include <iostream>
#include <string>
using namespace std;

// Node class for Trie
struct TrieNode {
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; ++i)
            children[i] = nullptr;
    }
};

// Trie class
class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert word into the trie
    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index])
                node->children[index] = new TrieNode();
            node = node->children[index];
        }
        node->isEndOfWord = true;
    }

    // Search for word in the trie
    bool search(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index])
                return false;
            node = node->children[index];
        }
        return node->isEndOfWord;
    }

    // Check if any word in the trie starts with the prefix
    bool startsWith(const string& prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (!node->children[index])
                return false;
            node = node->children[index];
        }
        return true;
    }
};

// Sample usage
int main() {
    Trie trie;
    trie.insert("apple");
    cout << trie.search("apple") << endl;     // 1
    cout << trie.search("app") << endl;       // 0
    cout << trie.startsWith("app") << endl;   // 1
    trie.insert("app");
    cout << trie.search("app") << endl;       // 1

    return 0;
}
