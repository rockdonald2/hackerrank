#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i) scanf("%d%*c", &arr[i]);

    for (int j = 0; j < (n / 2); ++j) {
        int temp = arr[j];
        arr[j] = arr[n - j - 1];
        arr[n - j - 1] = temp;
    }

    for (int w = 0; w < n; ++w) printf("%d ", arr[w]);

    return 0;
}