/*
//Склейка первых i битов с последними j битами целого числа длиной len битов
#include <stdio.h>
#include <windows.h>
int main() {
    system("chcp 65001");
    int i, j, a, len, x = 0, y = 0, z = 0, i_copy, j_copy,i_copy1;
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
    if(x > len)
        printf("Двоичная запись числа не укладывается в указанную длину, запустите программу заново с большей длиной");
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
    printf("Введите сколько берется битов из начала ");
    scanf_s("%d", &i);
    printf("Введите сколько берется битов из конца ");
    scanf_s("%d", &j);
    char res[i+j];
    int ij = i + j;
    i_copy = i;
    i_copy1 = i_copy;
    j_copy = j;
    while(i > 0){
        res[z] = brr[z];
        z++;
        i--;
    }
    while(j > 0){
        res[i_copy] = brr[len-1];
        len--;
        i_copy++;
        j--;
    }
    res[i_copy1+j_copy] = '\0';
    printf("Получилось число %s\n", res);
    int total = 0 , n = 1, h = ij - 1;
    while(ij > 0){
        if(res[h] == '1')
                total += n;
        n *= 2;
        ij--;
        h--;
    }
    printf("Десятичная запись числа: %d", total);
    return 0;
}
*/