# Question 2: Infix to Postfix Conversion

## (a) Data Structure Definition

Stack is used to store operators.

```c
char stack[MAX];
```

---

## (b) Functions Implemented

- precedence()
- infixToPostfix()
- evaluatePostfix()

---

## (c) In main()

1. Input infix expression.
2. Convert to postfix.
3. Evaluate expression.
4. Print result.

---

## (d) Sample Output

```
Enter infix expression: 3+4*2
Postfix: 342*+
Result: 11
```

---