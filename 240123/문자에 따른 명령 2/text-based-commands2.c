#include <stdio.h>

int main() {
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int x = 0, y = 0;
    int dir_num = 0;
    
    char s[100000];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
        } else if (s[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
        } else {
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}