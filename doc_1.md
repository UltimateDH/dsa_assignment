# Question 1: Balanced Parentheses Using Stack

## (a) Data Structure Definition

A stack is implemented using an array:

```c
char stack[MAX];
int top = -1;
```

- `stack[MAX]` stores bracket characters.
- `top` indicates the top position of stack.

---

## (b) Functions Implemented

### push(char c)
Adds an element to the stack.

### pop()
Removes the top element from the stack.

### isMatchingPair(open, close)
Checks whether two brackets match.

### isBalanced(expr[])
Checks whether the expression is balanced.

---

## (c) Organization of main()

1. Accepts expression from user.
2. Calls `isBalanced()`.
3. Prints result.

---

## (d) Sample Output

```
Enter expression: m + [a - b * (c + d * {m})]
Balanced
```

---