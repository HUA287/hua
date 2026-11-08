//202610303108
//胡嘉浩
#include <stdio.h>
struct Window {
    int buffer[3];
    int count;
};
struct Window push_data(struct Window win, int val) {
    win.buffer[win.count % 3] = val;
    win.count++;
    return win;
}
int get_average(struct Window win) {
    int n = (win.count < 3) ? win.count : 3;
    int sum = 0;
    if (n == 0) return 0;
    for (int i = 0; i < n; i++) {
        sum += win.buffer[i];
    }
    return sum / n;
}
int main(void) {
    int m;
    struct Window win = {{0, 0, 0}, 0};
    if (scanf("%d", &m) != 1) return 0;
    for (int i = 0; i < m; i++) {
        int v;
        scanf("%d", &v);
        win = push_data(win, v);
        if (i > 0) printf(" ");       
        printf("%d", get_average(win));
         
    }
    putchar('\n');
    return 0;
}