#include <stdio.h>
#define MAX 10

int adj[MAX][MAX], visited[MAX], n;

void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < n; i++)
        if (adj[v][i] && !visited[i])
            DFS(i);
}

void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;
    queue[rear++] = start;
    visited[start] = 1;

    while (front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for (int i = 0; i < n; i++) {
            if (adj[v][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    n = 4;
    int graph[4][4] = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {0,1,0,0}
    };

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            adj[i][j]=graph[i][j];

    printf("DFS: ");
    DFS(0);

    for(int i=0;i<n;i++) visited[i]=0;

    printf("\nBFS: ");
    BFS(0);

    return 0;
}