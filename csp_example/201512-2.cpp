#include <stdio.h>

struct XC {
    int i;
    int j;
    int num;
    int flag;
};

int main() {
    int i, j;
    int n, m;
    int x;
    int k = 0;
    int cnt = 1;
    
    scanf("%d %d", &n, &m);
    
    struct XC xc[1000];
    int a[31][31];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            xc[k].num = a[i][j];
            xc[k].i = i;
            xc[k].j = j;
            xc[k].flag = 1;
            k++;
        }
    }

    for (i = 0; i < n; i++) {
        cnt = 1;
        for (j = 0; j < m - 1; j++) {
            if (a[i][j] == a[i][j + 1]) {
                cnt++;
            } else {
                if (cnt >= 3) {
                    for ( x = j; x >= j - cnt + 1; x--) {
                        xc[i * m + x].flag = 0;
                    }
                }
                cnt = 1;
            }
        }
        if (cnt >= 3) {
            for ( x = m - 1; x >= m - cnt; x--) {
                xc[i * m + x].flag = 0;
            }
        }
    }

    for (j = 0; j < m; j++) {
        cnt = 1;
        for (i = 0; i < n - 1; i++) {
            if (a[i][j] == a[i + 1][j]) {
                cnt++;
            } else {
                if (cnt >= 3) {
                    for ( x = i; x >= i - cnt + 1; x--) {
                        xc[x * m + j].flag = 0;
                    }
                }
                cnt = 1;
            }
        }
        if (cnt >= 3) {
            for (x = n - 1; x >= n - cnt; x--) {
                xc[x * m + j].flag = 0;
            }
        }
    }

    for (i = 0; i < k; i++) {
        if (xc[i].flag) {
            printf("%d ", xc[i].num);
        } else {
            printf("0 ");
        }
        
        if ((i + 1) % m == 0) {
            printf("\n");
        }
    }

    return 0;
}

