#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    /*for (int i = a; i <= b; ++i) {
        if (i == 1) printf("one\n");
        else if (i == 2) printf("two\n");
        else if (i == 3) printf("three\n");
        else if (i == 4) printf("four\n");
        else if (i == 5) printf("five\n");
        else if (i == 6) printf("six\n");
        else if (i == 7) printf("seven\n");
        else if (i == 8) printf("eight\n");
        else if (i == 9) printf("nine\n");
        else if (i > 9 && i % 2 == 0) printf("even\n");
        else printf("odd\n");
    }*/

    for (int i = a; i <= b; ++i) {
        switch(i) {
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;

            default:
                if (i % 2 == 0) printf("even\n");
                else printf("odd\n");
        }
    }

    return 0;
}