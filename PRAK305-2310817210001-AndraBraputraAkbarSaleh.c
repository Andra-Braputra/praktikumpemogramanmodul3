#include <stdio.h>

int main() {
    int s, d, a, b;
    scanf("%d", &s);
    d = s / 86400;
    s = s - d * 86400;
    a = s / 3600;
    s = s - a * 3600;
    b = s / 60;
    s = s - b * 60;

    if (d == 0) {
        printf("%02d:%02d:%02d\n", a, b, s);
    } else {
        printf("%d hari %02d:%02d:%02d\n", d, a, b, s);
    }
    return 0;
}

   