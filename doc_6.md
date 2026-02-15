# Question 6: Min Heap and Max Heap

## (a) Data Structure Definition

Heap is stored in an array:

```c
int arr[];
```

For index `i`:
- Left child = `2*i + 1`
- Right child = `2*i + 2`
- Parent = `(i - 1) / 2`

---

## (b) Functions Implemented

### heapify(arr, n, i, isMax)
- Maintains heap property.
- Rearranges elements.

### buildHeap(arr, n, isMax)
- Calls heapify for all non-leaf nodes.
- Constructs Min or Max Heap.

---

## (c) In main()

1. Initialize unsorted array.
2. Call buildHeap().
3. Print heap structure.

---

## (d) Sample Output

```
Max Heap:
10 5 3 4 1
```

---