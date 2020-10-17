#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main(void) {
    int a, b;
    printf("1�ڂ̒l����͂��Ă�������:");
    scanf("%d", &a);
    printf("2�ڂ̒l����͂��Ă�������:");
    scanf("%d", &b);

    printf("2�̐��̍ŏ����{���́A%d�ł��B\n", lcm(a, b));
    printf("2�̐��̍ő���񐔂́A%d�ł��B\n", gcd(a, b));
}

int gcd(int a, int b) {
    int tmp, r;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    // ���[�N���b�h�̌ݏ��@
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