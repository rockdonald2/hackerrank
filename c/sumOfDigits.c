#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 10;
    while (n != 0) {
        int r = n % i;
        sum += r;
        n /= i;
    }

    printf("%d", sum);

    return 0;
}