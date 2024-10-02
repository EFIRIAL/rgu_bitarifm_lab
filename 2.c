/*
#include <stdio.h>
#include <windows.h>
#include <string.h>
//Вывод к-го бита числа a
int main(){
    int a, k;
    int i = 0;
    char arr[32];
    system("chcp 65001");
    printf("Введите число: ");
    scanf_s("%d", &a);
    while(a > 0){
        if(a % 2 == 0) {
            arr[i] = '0';
        }
        else{
            arr[i] = '1';
        }
        i++;
        a /= 2;
    }
    arr[i] = '\0';
    printf("Введите нужный бит: ");
    scanf_s("%d", &k);
    if(k <= strlen(arr))
        printf("Нужный бит это %c",arr[k-1]);
    else
        printf("Нужный бит это незначащий 0");
    return 0;
}
*/