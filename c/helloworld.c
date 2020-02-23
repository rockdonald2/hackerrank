#include <stdio.h>
#include <string.h>

int main() {
	printf("Hello, World! \n");

	char str[30];
	printf("Enter a single word: ");
	scanf("%s", &str);
	printf("%s\n", str);

	return 0;
}
