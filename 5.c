/*
//Перестановка i-го и j-го битов в числе a
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main() {
    system("chcp 65001");
    int a, i, j;
    int m = 1;
    int x = 0;
    int z = 0;
    char arr[32], i_b;
    printf("Введите число: ");
    scanf_s("%d", &a);
    while(a > 0){
        if(a % 2 == 0)
            arr[z] = '0';
        else
            arr[z] = '1'; //перевод числа в двоичную систему
        z++;
        a /= 2;
    }
    arr[z] = '\0';
    printf("Введите любой бит числа: ");
    scanf_s("%d", &i);
    i_b = arr[i-1];
    printf("Введите бит, с которым он поменяется местами: ");
    scanf_s("%d", &j);
    if(i <= strlen(arr) && j <= strlen(arr)) {
        arr[i-1] = arr[j-1];
        arr[j-1] = i_b;
    }
    else if(i >= strlen(arr) && j <= strlen(arr)){
        arr[i-1] = arr[j-1];
        arr[j-1] = '0';
    }
    else if(i <= strlen(arr) && j >= strlen(arr)){
        arr[j-1] = arr[i-1];
        arr[i-1] = '0';
    }
//    printf("%s\n", arr);
    unsigned long long v;
    v = strlen(arr);
//    printf("%llu\n", v);
    int total = 0;
    if(v > 0){
        while (v > 0){
            if (arr[x] == '1'){
                total += m;
            }
            x++;    //перевод числа обратно в десятичную систему
            v--;
            m *= 2;
            }
    }
    else
        printf("Нет числа");
    printf("При перестановке %d-го и %d-го битов получилось число %d",i, j, total);
    return 0;
}
*/