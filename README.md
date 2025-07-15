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

## 🚀 How to Compile & Run

Open a terminal in the repository folder and run:

```bash
g++ <filename>.cpp -o <filename>
./<filename>
