#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a > 0) {
        printf("positif");
    } else if (a < 0) {
        printf("negatif");
    } else if (a == 0) {
        printf("nol");
    }
    return 0;
}