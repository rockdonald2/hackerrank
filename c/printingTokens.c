#include <stdio.h>
#include <string.h>

int main() {
    char str[1024];
    scanf("%[^\n]%*c", &str);
    
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == ' ') {
            // printf("\n");
            str[i] = '\n';
        } else {
            // printf("%c", str[i]);
            continue;
        }
    }

    printf("%s", str);

    return 0;
}