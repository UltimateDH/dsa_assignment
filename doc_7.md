# Question 7: Dijkstra’s Algorithm

## (a) Data Structure Definition

```c
int graph[V][V];
int dist[V];
int visited[V];
```

- `graph` stores edge weights.
- `dist` stores shortest distances.
- `visited` marks processed nodes.

---

## (b) Functions Implemented

### minDistance(dist, visited)
- Returns unvisited vertex with smallest distance.

### dijkstra(graph, src)
- Updates shortest distances.
- Uses greedy approach.

---

## (c) In main()

1. Initialize graph matrix.
2. Call `dijkstra(graph, source)`.
3. Print shortest path distances.

---

## (d) Sample Output

```
Distance from 0 to 1 = 10
Distance from 0 to 2 = 50
Distance from 0 to 3 = 30
Distance from 0 to 4 = 60
```

---
