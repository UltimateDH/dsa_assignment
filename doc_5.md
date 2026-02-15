# Question 5: Graph Using Adjacency Matrix (BFS and DFS)

## (a) Data Structure Definition

Graph is represented using adjacency matrix:

```c
int adj[MAX][MAX];
int visited[MAX];
```

- `adj[i][j] = 1` indicates edge between i and j.
- `visited[]` keeps track of visited vertices.

---

## (b) Functions Implemented

### DFS(int v)
- Marks vertex as visited.
- Recursively visits adjacent unvisited vertices.

### BFS(int start)
- Uses queue.
- Visits vertices level by level.

---

## (c) In main()

1. Initialize adjacency matrix.
2. Call DFS from source.
3. Reset visited array.
4. Call BFS from source.

---

## (d) Sample Output

```
DFS: 0 1 2 3
BFS: 0 1 2 3
```

---