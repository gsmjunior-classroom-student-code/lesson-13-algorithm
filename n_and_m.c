#include <stdio.h>
int n, m;
int selected[8];
int visited[8];

void dfs(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", selected[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            selected[depth] = i;
            dfs(depth + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    dfs(0);

    return 0;
}
