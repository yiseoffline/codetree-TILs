#include <stdio.h>

#define MAX_NUM 1000

int n, m;
int vertex_cnt;

int graph[MAX_NUM + 1][MAX_NUM + 1];
int visited[MAX_NUM + 1];

void DFS(int vertex) {
    for(int curr_v = 1; curr_v <= n; curr_v++){
        if(graph[vertex][curr_v] && !visited[curr_v]) {
            visited[curr_v] = 1;
            vertex_cnt++;
            DFS(curr_v);
        }
    }
}

int main() { 
    scanf("%d %d", &n, &m);

    int v1, v2;
    for(int i = 0; i < m; i++) {
        scanf("%d %d", &v1, &v2);
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }

    visited[1] = 1;
    DFS(1);

    printf("%d\n", vertex_cnt);

    return 0;
}