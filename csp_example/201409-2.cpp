#include<stdio.h>

int paper[102][102];

int main() {
	int i,n,x,y;
    int x1, y1, x2, y2;
    int area = 0;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (x = x1; x < x2; x++) {
            for (y = y1; y < y2; y++) {
                paper[x][y] = 1;  
            }
        }
    }

    for (x = 0; x <= 100; x++) {
        for (y = 0; y <= 100; y++) {
            area += paper[x][y];
        }
    }

    printf("%d\n", area);

    return 0;
}

