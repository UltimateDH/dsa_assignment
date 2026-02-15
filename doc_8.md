# Question 8: Sorting Algorithms Comparison

## (a) Data Structure Definition

Array of integers:

```c
int arr[n];
```

Counters:

```c
int comparisons = 0;
int swaps = 0;
```

---

## (b) Functions Implemented

### bubbleSort()
- Compares adjacent elements.
- Swaps if out of order.
- Time Complexity: O(n²)

### selectionSort()
- Selects minimum element.
- Swaps with first unsorted element.
- Time Complexity: O(n²)

### insertionSort()
- Inserts element into sorted portion.
- Efficient for small datasets.
- Time Complexity: O(n²)

### mergeSort()
- Divide and conquer algorithm.
- Recursively divides array.
- Merges sorted halves.
- Time Complexity: O(n log n)

---

## (c) In main()

1. Accept value of N.
2. Generate N random numbers.
3. Display menu for sorting choice.
4. Call selected sorting function.
5. Display sorted array.
6. Print total comparisons and swaps.

---

## (d) Sample Output

```
Enter N: 5

Before Sorting:
234 12 876 45 90

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter choice: 1

After Sorting:
12 45 90 234 876

Total Comparisons: 10
Total Swaps: 6
```

---