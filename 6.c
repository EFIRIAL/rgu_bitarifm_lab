/*
//Обнуление младших k бит в числе a
#include <stdio.h>
#include <windows.h>
int main() {
    int a, k;
    system("chcp 65001");
    printf("Введите число: ");
    scanf_s("%d", &a);
    printf("Введите число бит, которые нужно обнулить: ");
    scanf_s("%d", &k);
    a &= ~((1 << k) - 1);
    printf("Было обнулено %d бит, получилось число %d",k, a);
}
*/