#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main() {
    uint64_t n;
    int k;
    scanf("%llu %d", &n, &k);

    uint64_t original_n = n; // Сохраняем исходное значение n для дальнейшего использования
    uint64_t root = 1;       // Используется для вычисления корня числа n
    int found = 0;           // Флаг, обозначающий, нашли ли мы полное разложение n

    // Перебираем возможные делители
    for (uint64_t i = 2; i <= n; i++) {
        int count = 0; // Количество раз, которое n делится на i

        // Проверяем, делится ли n на i^k
        while (n % (uint64_t)pow(i, k) == 0) {
            count++;
            n /= (uint64_t)pow(i, k);
        }

        // Если делится, то учитываем этот делитель
        if (count > 0) {
            root *= (uint64_t)pow(i, count);
            printf("%llu %llu\n", i, n);
        }

        // Если n сократилось до 1, значит, мы нашли полное разложение
        if (n == 1) {
            found = 1;
            break;
        }
    }

    // Печатаем результат
    if (found) {
        printf("%llu\n", root);
    } else {
        printf("-1\n");
    }

    return 0;
}
