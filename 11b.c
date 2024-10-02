/*
//Получение всех битов целого числа длиной len между первыми i битами и последними j битами
#include <stdio.h>
#include <windows.h>
int main(){
    system("chcp 65001");
    int i, j, a, len, x = 0, y = 0, c = 0;
    printf("Введите число: ");
    scanf_s("%d", &a);
    printf("Введите длину числа: ");
    scanf_s("%d", &len);
    char arr[len], brr[len];
    while(a > 0){
        if(a % 2 == 0)
            arr[x] = '0';
        else
            arr[x] = '1';
        x++;
        a /= 2;
    }
    if(x > len) {
        printf("Двоичная запись числа не укладывается в указанную длину, запустите программу заново с большей длиной\n");
        return 0;
    }
    while(x < len) {
        arr[x] = '0';
        x++;
    }
    arr[x] = '\0';
    while(x > 0){
        brr[y] = arr[x-1];
        x--;
        y++;
    }
    brr[y] = '\0';
    printf("Двоичная %d-разрядная запись числа %s\n",len, brr);
    printf("Введите сколько бит урезается с начала: ");
    scanf_s("%d", &i);
    printf("Введите, сколько бит урезается с конца: ");
    scanf_s("%d", &j);
    int n = len-i-j;
    char res[len-i-j];
    while(n > 0){
        res[c] = brr[i];
        c++;
        i++;
        n--;
    }
    res[c] = '\0';
    printf("Между i и j находится: %s", res);
    return 0;
}
*/