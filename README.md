

---

# 🔗 Linked List Implementation in C++

## 📘 About  
This experiment demonstrates the creation and manipulation of singly linked lists in C++. It includes node creation, head insertion, and traversal, while highlighting the advantages of linked lists over arrays in dynamic memory management.

---

## 🎯 Aim  
To study the concept of linked lists in C++, and implement basic operations such as node creation, insertion at head, and traversal using pointers and dynamic memory.

---

## 📚 Theory  
A **linked list** is a linear data structure where each element (node) contains data and a pointer to the next node. Unlike arrays, linked lists allow dynamic memory allocation and efficient insertion/deletion without shifting elements.

### 🔑 Key Concepts  
- **Node**: Contains data and a pointer to the next node.  
- **Head**: Points to the first node in the list.  
- **Insertion**: Adds a new node to the list.  
- **Traversal**: Visits each node to access or display data.  
- **Dynamic Allocation**: Nodes are created using `new` to allocate memory at runtime.

  
![Linked List Data Str](https://github.com/user-attachments/assets/f4f6e312-7e3f-442a-a6bc-339ae09509a8)


---

### 🧬 Types of Linked Lists

| Type                          | Description                                                                 |
|-------------------------------|-----------------------------------------------------------------------------|
| **Singly Linked List**        | Each node points to the next node. Traversal is one-way (forward only).     |
| **Doubly Linked List**        | Each node has two pointers: one to the next and one to the previous node.   |
| **Circular Linked List**      | The last node points back to the head, forming a circular structure.        |
| **Circular Doubly Linked List** | Combines circular and doubly linked features for bidirectional looping.     |


![Linked List Operatio](https://github.com/user-attachments/assets/88aa4f94-cd37-4efe-9d8c-7fd269eff503)
---

### 🔁 Linked List vs Array

| Feature               | Array                          | Linked List                         |
|-----------------------|--------------------------------|-------------------------------------|
| **Memory Allocation** | Fixed size (static)            | Dynamic size (flexible)             |
| **Insertion/Deletion**| Costly (requires shifting)     | Efficient (pointer updates only)    |
| **Access Time**       | Fast (random access via index) | Slower (sequential traversal)       |
| **Memory Usage**      | Compact                        | Extra memory for pointers           |
| **Data Structure Type**| Contiguous                    | Non-contiguous                      |

---

## 📋 Algorithms

### 🧾 1. Node Creation and Display (Basic)

**Start**  
- Define a class `Node` with `val` and `next`.  
- Create a new node using `new Node(10)`.  
- Print the value and pointer of the node.  
**End**

```cpp
class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};
```

---

### 🧾 2. Node Creation with Constructor

**Start**  
- Define a class `Node` with a constructor that initializes `val` and sets `next` to `NULL`.  
- In `main()`, create a node with value `10`.  
- Print the node’s value and pointer.  
**End**

```cpp
Node* head = new Node(10);
cout << head->val << " " << head->next;
```

---

### 🧾 3. Insert at Head and Display List

**Start**  
- Define a class `Link` with `data` and `next`.  
- Create function `insert_head(Link* &head, int data)`:
  - Create a new node.
  - Point its `next` to current `head`.
  - Update `head` to new node.
- Create function `display(Link* head)`:
  - Traverse the list using a temporary pointer.
  - Print each node’s data followed by `->`.
- In `main()`:
  - Initialize `head` as `NULL`.
  - Call `insert_head()` with values.
  - Call `display()` after each insertion.  
**End**

```cpp
void insert_head(Link* &head, int data) {
    Link* n = new Link(data);
    n->next = head;
    head = n;
}
```

---

## 🚀 Applications of Linked Lists

- Dynamic memory management  
- Implementation of stacks and queues  
- Graph adjacency representation  
- Polynomial arithmetic  
- Real-time data streams

---

## 🧠 Conclusion

This experiment demonstrates:

- 📦 How nodes are dynamically created and linked  
- 🔁 How insertion at head modifies the list structure  
- 📤 How traversal accesses each node sequentially  
- 🧼 Clean modular functions for insertion and display  
- ⚖️ Comparison with arrays to highlight flexibility and efficiency

👉 Linked lists are essential for building dynamic, pointer-based data structures in system-level and algorithmic programming.

---

Let me know if you’d like to add AIM Theory breakdowns or format this for GitHub with collapsible sections and badges!
