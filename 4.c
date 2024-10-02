/*
//Снятие k-го бита числа a
#include <stdio.h>
#include <windows.h>
int main(){
    system("chcp 65001");
    int a, k;
    printf("Введите число: ");
    scanf_s("%d", &a);
    printf("Введите нужный бит: ");
    scanf_s("%d", &k);
    a &= ~(1 << (k-1));
    printf("Вместо %d-го бита установлен 0, получилось число %d", k, a);
    return 0;
}
*/