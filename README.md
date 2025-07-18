# 📚 Data Structures Implementations

This repository contains **C++ implementations** of fundamental data structures as part of my intensive training plan.  
Each data structure is implemented in a separate `.cpp` file, with a simple `main()` function to demonstrate its usage and test basic operations.

---

## 📝 Overview

This project aims to provide a clean, beginner-friendly set of implementations for some of the most common data structures used in computer science.  
It includes their definitions, operations, complexities, and real-world use cases.

---

## ✅ Implemented Data Structures

### 📅 Day 1
- 🟢 **Dynamic Array**
  - **File:** `Day1/dynamic_array.cpp`
  - **Description:** Resizable array that doubles its capacity when full.
  - **Time Complexity:**
    - Access: O(1)
    - Insert: O(1) amortized
    - Delete: O(n)
  - **Space Complexity:** O(n)
  - **Use Case:** Managing a dynamic list of elements with frequent additions.

- 🟢 **Singly Linked List**
  - **File:** `Day1/singly_linked_list.cpp`
  - **Description:** A sequence of nodes where each points to the next.
  - **Time Complexity:**
    - Access: O(n)
    - Insert/Delete at head: O(1)
    - Insert/Delete at tail: O(n)
  - **Space Complexity:** O(n)
  - **Use Case:** Implementing stacks, queues, and adjacency lists.

- 🟢 **Stack (Array-based)**
  - **File:** `Day1/stack_array.cpp`
  - **Description:** LIFO stack implemented using a fixed-size array.
  - **Time Complexity:**
    - Push: O(1)
    - Pop: O(1)
    - Peek: O(1)
  - **Space Complexity:** O(n)
  - **Use Case:** Expression evaluation, undo functionality.

- 🟢 **Stack (Linked List-based)**
  - **File:** `Day1/stack_linked_list.cpp`
  - **Description:** LIFO stack implemented using a singly linked list.
  - **Time Complexity:** Same as array-based.
  - **Use Case:** Same as array-based, with dynamic size.

---

### 📅 Day 2
- 🟢 **Queue (Array-based)**
  - **File:** `Day2/queue_array.cpp`
  - **Description:** FIFO queue using a circular array.
  - **Time Complexity:**
    - Enqueue: O(1)
    - Dequeue: O(1)
  - **Use Case:** Task scheduling, buffering.

- 🟢 **Queue (Linked List-based)**
  - **File:** `Day2/queue_linked_list.cpp`
  - **Description:** FIFO queue using linked list for dynamic size.
  - **Time Complexity:** Same as array-based.
  - **Use Case:** Same as array-based.

- 🟢 **Doubly Linked List**
  - **File:** `Day2/doubly_linked_list.cpp`
  - **Description:** Each node points both to the next and previous.
  - **Time Complexity:**
    - Insert/Delete: O(1) if pointer known
  - **Use Case:** Implementing deques, navigation (back/forward).

- 🟢 **Circular Linked List**
  - **File:** `Day2/circular_linked_list.cpp`
  - **Description:** Last node links back to the first.
  - **Use Case:** Round-robin scheduling, continuous data buffers.

---

### 📅 Day 3
- 🟢 **Binary Tree**
  - **File:** `Day3/binary_tree.cpp`
  - **Description:** Basic binary tree structure with traversals.
  - **Traversals:**
    - Inorder: Left → Root → Right
    - Preorder: Root → Left → Right
    - Postorder: Left → Right → Root
  - **Use Case:** Representing hierarchical data.

- 🟢 **Binary Search Tree**
  - **File:** `Day3/binary_search_tree.cpp`
  - **Description:** Binary tree with ordering property for efficient search, insert, and delete.
  - **Time Complexity:**
    - Search: O(log n) (average), O(n) (worst case)
    - Insert: O(log n) (average), O(n) (worst case)
    - Delete: O(log n) (average), O(n) (worst case)
  - **Use Case:** Efficient search and sorted data storage.

---

### 📅 Day 4
- 🟢 **Hash Table (Separate Chaining)**
  - **File:** `Day4/hash_table.cpp`
  - **Description:** Hash table implementation using separate chaining with linked lists to handle collisions.
  - **Time Complexity:**
    - Insert: O(1) (average), O(n) (worst case)
    - Delete: O(1) (average), O(n) (worst case)
    - Search: O(1) (average), O(n) (worst case)
  - **Use Case:** Storing key-value pairs with fast access and handling collisions.

- 🟢 **Min Heap**
  - **File:** `Day4/min_heap.cpp`
  - **Description:** Binary heap where the smallest element is always at the root.
  - **Time Complexity:**
    - Insert: O(log n)
    - Delete Min: O(log n)
    - Get Min: O(1)
  - **Use Case:** Priority queues, scheduling.

- 🟢 **Graph (Adjacency List)**
  - **File:** `Day4/graph_adjlist.cpp`
  - **Description:** Graph representation using adjacency lists for each vertex.
  - **Use Case:** Representing sparse graphs efficiently.

---

### 📅 Day 5
- 🟢 **Trie**
  - **File:** `Day5/trie.cpp`
  - **Description:**  
    A tree-like data structure used to store strings efficiently, particularly useful for prefix-based searches.
  - **Time Complexity:**
    - Insert: O(L), where L is the length of the word
    - Search: O(L)
    - Prefix Search: O(L)
  - **Space Complexity:** O(N * L), where N is the number of words, and L is the average word length.
  - **Use Case:**  
    - Autocomplete systems
    - Spell checking
    - IP routing
  - **How to Run:**
    ```bash
    g++ Day5/trie.cpp -o trie
    ./trie
    ```

- 🟢 **Union-Find (Disjoint Set)**
  - **File:** `Day5/union_find.cpp`
  - **Description:**  
    A data structure that keeps track of elements partitioned into disjoint (non-overlapping) sets, supporting union and find operations efficiently.
  - **Time Complexity:**
    - Find: O(α(N)) with path compression
    - Union: O(α(N)) with union by rank
  - **Space Complexity:** O(N)
  - **Use Case:**  
    - Detecting cycles in a graph
    - Kruskal’s algorithm for Minimum Spanning Tree
    - Network connectivity
  - **How to Run:**
    ```bash
    g++ Day5/union_find.cpp -o union_find
    ./union_find
    ```

- 🟢 **Graph Traversal (BFS & DFS)**
  - **File:** `Day5/graph_traversal.cpp`
  - **Description:**  
    Graph traversal algorithms to visit all vertices of a graph, either breadth-first (level by level) or depth-first (path as deep as possible).
  - **Time Complexity:**
    - BFS: O(V + E)
    - DFS: O(V + E)
  - **Space Complexity:** O(V)
  - **Use Case:**  
    - Pathfinding in maps
    - Detecting connected components
    - Cycle detection in graphs
  - **How to Run:**
    ```bash
    g++ Day5/graph_traversal.cpp -o graph_traversal
    ./graph_traversal
    ```

---

## 🚀 How to Compile & Run

Open a terminal in the repository folder and run:

```bash
g++ <filename>.cpp -o <filename>
./<filename>
