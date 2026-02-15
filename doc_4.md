# Question 4: Doubly Linked List (Insertion and Deletion)

## (a) Data Structure Definition

```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
```

- `prev` points to previous node.
- `next` points to next node.
- Allows traversal in both directions.

---

## (b) Functions Implemented

### insertAfter(node, value)
- Creates a new node.
- Adjusts `next` and `prev` pointers.
- Inserts node after given node.

### deleteNode(head, del)
- Updates surrounding pointers.
- Frees memory of deleted node.

### printList(head)
- Traverses and prints list.

---

## (c) In main()

1. Create initial node.
2. Insert new nodes.
3. Delete a node.
4. Print final list.

---

## (d) Sample Output

```
List after operations:
1 3
```

---