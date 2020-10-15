#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int n , min = 10, max = -1;
    int d[3][3];
    srand((unsigned)time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            d[i][j] = rand() % 10;
            printf("%d ", d[i][j]);

            if (max < d[i][j]) max = d[i][j];
            if (min > d[i][j]) min = d[i][j];
        }
        printf("\n");
    }
    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);
}