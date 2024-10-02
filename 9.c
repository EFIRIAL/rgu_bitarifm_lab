/*
//Последовательное применение xor`а ко всем битам числа
#include <stdio.h>
#include <windows.h>
#include <math.h>
int main() {
    int p, a, n = 1, i = 0, x = 0;
    unsigned long long len;
    system("chcp 65001");
    printf("На вход дается 2^p разрядное целое число\n");
    printf("Введите степень p: ");
    scanf_s("%d", &p);
    printf("Введите число: ");
    scanf_s("%d", &a);
    for(int b = 0; b < p; b++){ //узнаем разрядность числа и записываем ее в n
        n *= 2;
    }
    char arr[n], brr[n-1];
    while(a > 0){
        if(a % 2 == 0)
            arr[i] = '0';
        else
            arr[i] = '1';
        i++;
        a /= 2;
    }
    while(i < n){
        arr[i] = '0';
        i++;
    }
    arr[i] = '\0';
    int c = n-2;
    if(arr[n-1] == arr[n-2])
        brr[x] = '0';
    else
        brr[x] = '1';
    while(c > 0){
        if(brr[x++] == arr[n-3])
            brr[x] = '0';
        else
            brr[x] = '1';
        c--;
        n--;
    }
    printf("В результате \"поксорки\" всех битов числа друг с другом получилось число - %c\n",brr[n-2]);
    return 0;
}
*/