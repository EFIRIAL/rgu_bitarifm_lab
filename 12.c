/*
#include <stdio.h>
#include <windows.h>

//для первого запуска используется файл input.txt, который уже хранит в себе текст и crypted.txt, в который будет шифроваться первый файл
//для второго запуска(тоесть для дешифровки) мы сначала выбираем зашифрованный файл crypted.txt
// и с тем же ключом расшифровываем данные из него в decrypted.txt

int main() {
    system("chcp 65001");
    FILE *file_in, *file_out;
    char input_file[100], output_file[100];
    char key;
    printf("Введите имя файла для шифрования/дешифрования: ");
    scanf("%s", input_file);
    printf("Введите имя файла для сохранения результата: ");
    scanf("%s", output_file);
    printf("Введите ключ (один символ): ");
    scanf(" %c", &key);
    file_in = fopen(input_file, "rb");
    file_out = fopen(output_file, "wb");
    if (file_in == NULL || file_out == NULL) {
        printf("Ошибка при открытии файлов.\n");
        return 1;
    }

    int byte;
    while ((byte = fgetc(file_in)) != EOF) {
        fputc(byte ^ key, file_out);
    }

    fclose(file_in);
    fclose(file_out);

    printf("Операция завершена!\n");
    return 0;
}
*/
