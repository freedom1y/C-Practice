#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main(void) {
    int a, b;
    printf("1つ目の値を入力してください:");
    scanf("%d", &a);
    printf("2つ目の値を入力してください:");
    scanf("%d", &b);

    printf("2つの数の最小公倍数は、%dです。\n", lcm(a, b));
    printf("2つの数の最大公約数は、%dです。\n", gcd(a, b));
}

int gcd(int a, int b) {
    int tmp, r;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    // ユークリッドの互除法
    r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}