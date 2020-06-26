#include <stdio.h>
#include <stdlib.h>
// ha float számokkal dolgoznánk a math.h header kellene, a stdlib tartalmazza az abs függvény int-hez tartozó változatát

void update(int *a, int *b) {
    int temp = *a;
    *a = *a + *b;
    *b  = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d %d", a, b);

    return 0;
}