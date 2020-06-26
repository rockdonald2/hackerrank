#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int maxAND = 0, maxOR = 0, maxXOR = 0;
    int and = 0, or = 0, xor = 0;
    for (int i = 1; i <= n - 1; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            and = (i & j);
            or = (i | j);
            xor = (i ^ j);

            if (and > maxAND && and < k) maxAND = and;
            if (or > maxOR && or < k) maxOR = or;
            if (xor > maxXOR && xor < k) maxXOR = xor;
        }
    }

    printf("%d\n%d\n%d", maxAND, maxOR, maxXOR);

    return 0;
}