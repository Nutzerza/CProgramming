#include <stdio.h>
#include <ctype.h>
int main() {
	char cEn;
	scanf("%c", &cEn);
	if (islower(cEn)) {
		printf("lowercase");
	}
	else if (isupper(cEn)) {
		printf("uppercase");
	}
	else if (isalnum(cEn)) {
		printf("number");
	}
	else {
		printf("error");
	}
	return 0;
}