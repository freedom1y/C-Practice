#include <stdio.h>

int main(void) {
    float d[] = { 1.2, -1.3, 5.2, 4.8 };
    for (int i = 0; i < sizeof(d) / sizeof(float); i++) {
        printf("d[%d] = %0.1f\n", i, d[i]);
    }
}