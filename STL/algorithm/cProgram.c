//
// Created by jollu on 12/17/21.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define Mem_step 40;
#define SentStartSize 20
#define StartTextSize 30

char *get_Sentence() { // Ввод предложения
    int ssize = SentStartSize; // создаем переменную размер и помещаем в него начальную длину массива
    char *sentence = malloc(ssize * sizeof(char)); // выделяем память
    char sym; // иницилизируем символ
    int i = 0;
    while (1) { // 1 - бесконечный цикл
        sym = getchar(); // считываем символ
        sentence[i++] = sym; // заносим в массив символ
        if (i == ssize - 2) { // если
            ssize += Mem_step;  // увеличивает размер начального массива
            sentence = realloc(sentence, ssize * sizeof(char)); // увеличивает размер нашего массива
        }
        if (sym == '.') break; // условие, если сумвол равен . - цикл заканчивается
    }
    sentence[i] = '\0'; // закончилась строка( добавление символа конца строки)
    return sentence; // возвращаем наше предложение
}

char **get_Text(int *size) { // Указатель на кол-во переменных
    int TextSize = StartTextSize;  // начальный размер массива
    char *sentence; // указатель на предложение (строка)
    char **text = malloc(TextSize * sizeof(char *)); // выделяю память для текста
    int i = 0;
    while (1) {
        sentence = get_Sentence(); // предложение равно функции получения строки
        text[i++] = sentence; // заносим предложение в массив текста
        if (getchar() == '\n') break; // если счет символа равен переносу - Стоп
        if (i == TextSize - 2) { // если счетчик равен размеру массива текста то
            TextSize += Mem_step; // добавляем память
            text = realloc(text, TextSize * sizeof(char *)); // увеличивае размер памяти массива текста
        }
    }
    *size = i; // записываем итоговый размер текста, (колличество поступивших предложений)
    return text;
}

char **delete_duplicates(char **text,
                         int *size) { // функция удаления повторяющихся предложений, на выход поступает указатель на указатель символа ( массив строк)
    int c = 0;
    int duplicate, dc;
    char **textnew = malloc(*size * sizeof(char *)); // выделяем память под исправленный текст
    for (int i = 0; i < *size; i++) { //
        dc = 0;
        for (int j = 0; j < i; j++) {
            if (strlen(text[i]) ==
                strlen(text[j])) { // если длина одного элемента текста равна размеру другого элемента
                duplicate = 1; // тригер дупликата
                for (int m = 0; m < strlen(text[i]); m++) { // до тех пор пока счетчик меньше длины элемента
                    if (tolower(text[j][m]) !=
                        tolower(text[i][m])) { // если строчный текс одного элемента не равен строчному тексту другого элемента
                        duplicate = 0; // тригер дупликата ничего не нашел
                        break;
                    }
                }
                dc += duplicate; // счетчик тригеров дупликата
            }
        }
        if (dc == 0) { // если счетчик 0
            textnew[c++] = text[i]; // текст не изменился
        }
    }
    *size = c;
    return textnew;
}

void Sent_upper(char **textnew, int *size) {
    int len_sent, num, i, j;
    for (i = 0; i < *size; i++) {
        len_sent = strlen(textnew[i]);
        textnew[i][0] = toupper(textnew[i][0]);
        for (j = 0; j < len_sent; j++) {
            num = ((int) textnew[i][j]);
            if ((num < 91) && (num > 64)) {
                textnew[i][j] = ((char) tolower(textnew[i][j]));
            }
        }
    }
}

int idel_sent_if_2018(char *str) {
    char *year = "2018";
    char *pos = strstr(str, year);
    if (pos) {
        return 1;
    } else {
        return 0;
    }
}

char **del_sent_if_2018(char **textnew, int *size) {
    for (int i = 0; i < *size; i++) {
        if (idel_sent_if_2018(textnew[i])) {
            textnew[i] = "\0";
        }

    }
    return textnew;
}

int sum(char *text) {
    int sum = 0;
    for (int i = 0; i < strlen(text); i++) {
        if (isdigit(text[i])) {
            sum += text[i] - '0';

        }
    }
    if (sum == 0) sum = 999999999;
    return sum;
}

int sort_number(const void *a, const void *b) {
    char *x = *(char **) a;
    char *y = *(char **) b;
    int sum1 = sum(x);
    int sum2 = sum(y);
    if (sum1 > sum2) return 1;
    if (sum1 < sum2) return -1;
    return 0;
}


int main() {
    int size;
    char **text;
    text = get_Text(&size);
    qsort(text, size, sizeof(char *), sort_number);
    text = delete_duplicates(text, &size);
    Sent_upper(text, &size);
    //char **textnew = del_sent_if_2018(text, &size);
    for (int i = 0; i < size; i++) printf("%s ", text[i]);

    //char **textnew = delete_duplicates(text, &size);
    //free(text);
    //char **text2 = del_sent_if_2018(textnew, &size);
    //printf("%d", size);
    //text = text2;
    // for (int i = 0; i < size; i++) printf("%s", text[i]);

}