#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int f = a >= b ? a : b;
    int s = c >= d ? c : d;

    return f >= s ? f : s;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int max = max_of_four(a, b, c, d);

    printf("%d", max);

    return 0;
}