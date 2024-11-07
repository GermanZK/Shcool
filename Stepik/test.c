#include <stdio.h>


int delim(int a[], int i, int j);
    // Функция делит конфеты детей a[i] и a[j].
    // Отдает школьнику (return) лишние конфеты.

int all_equal(int a[], int n);
    // Проверяет, все ли числа в массиве a одинаковые.
    // Возвращает 1 (все одинаковые) или 0 (не все)
    // вы писали раньше такую задачу

int make_all_happy(int a[], int n);
    // Дети делят конфеты, "лишние" конфеты возвращают

int main()
{
    int a[100];     // ребенок i имеет a[i] конфет
    int n;          // всего детей
    int i;          // ребенок

    scanf("%d", &n);                        // читаем входные данные
    for(i = 0; i < n; i++)
        scanf("%d", a+i);

    int schoolboy = make_all_happy(a, n);   // делим
    printf("%d %d\n", schoolboy, a[0]);     // печатаем ответ

    return 0;
}