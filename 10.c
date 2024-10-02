/*
#include <stdio.h>
#include <windows.h>
#define LEFT(x, r, n) (((x << n) | (x >> (r - n))) & ((1 << r) - 1))
#define RIGHT(x, r, n) (((x >> n) | (x << (r - n))) & ((1 << r) - 1))
int main(){
    system("chcp 65001");
    int x, right, left, p, r = 1, n;
    printf("На вход дается 2^p разрядное целое число\n");
    printf("Введите степень p: ");
    scanf_s("%d", &p);
    printf("Введите число: ");
    scanf_s("%d", &x);
    printf("Введите количество битов для сдвига: ");
    scanf_s("%d", &n);
    for(int b = 0; b < p; b++){
        r *= 2;
    }
    left = LEFT(x, r, n);
    right = RIGHT(x, r, n);
    printf("Циклический сдвиг влево дал число: %d\n", left);
    printf("Циклический сдвиг вправо дал число: %d", right);
    return 0;
}
*/