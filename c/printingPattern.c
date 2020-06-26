#include <stdio.h>

int main() {
    int n;
    scanf("%d%*c", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int min = i < j ? i : j;

            min = min < 2 * n - 1 - i ? min : 2 * n - 1- i - 1;
            min = min < 2 * n - 1 - j - 1 ? min : 2 * n - 1 - j - 1;

            // a minta a következő képlet alapján jön ki: n - a négy oldaltól mért távolság minimumja
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}