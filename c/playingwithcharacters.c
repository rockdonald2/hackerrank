#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c%*c", &ch);
    printf("%c\n", ch);

    char str[128];
    printf("Enter a sentence: ");
    // azért kell a szóköz a mondatbeolvasás elé, mert másképp buggos lenne, az utolsó \n karakter miatt
    // vagy alapvető használhatjuk az ignore whitespace sort, amely a %*c, ez megakadályozza a newline továbbadását, hiszen az utolsó newline-t elveti
    scanf("%[^\n]%*c", &str);
    printf("%s\n", str);

    /*

    char ch;
    char s[100];
    char sen[100];

    scanf("%c%*c", &ch);
    scanf("%s%*c", &s);
    alapvetően az a [] közé írt sor, nem mást jelöl mint egy scanset-et, amely meghatározza, hogy a scanf olvasson be minden inputot, kivétel egy newline-t
    scanf("%[^\n]%*c", &sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    */

    return 0;
}