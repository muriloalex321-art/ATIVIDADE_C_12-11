#include <stdio.h>

int main() {
    int i;

    // ===== 1 até 10 =====
    // FOR
    printf("For crescente: ");
    for (i = 1; i <= 10; i++) {
        printf("%d,", i);
    }
    printf("\n");
    // WHILE
    i = 1;
    printf("\nWhile crescente: ");

    while (i <= 10) {
        printf("%d,", i);
        i++;
    }
    printf("\n");

    // DO WHILE
    i = 1;
    printf("\nDo While crescente: ");

    do {
        printf("%d,", i);
        i++;
    } while (i <= 10);
    printf("\n");

    // ===== 10 até 1 =====
    // FOR
    printf("\nFor decrescente: ");


    for (i = 10; i >= 1; i--) {
        printf("%d,", i);
    }
    printf("\n");

    // WHILE
    i = 10;
    printf("\nWhile decrescente: ");

    while (i >= 1) {
        printf("%d,", i);
        i--;
    }
    printf("\n");

    // DO WHILE
    i = 10;
	printf("\nDo While crescente: ");

    do {
        printf("%d,", i);
        i--;
    } while (i >= 1);
    printf("\n");

    return 0;
}
