#include <stdio.h>

int main() {
	char cEn;
	scanf("%c", &cEn);
	if (cEn>=65 && cEn<=90) {
		printf("%c", cEn+32);
	}
	else if (cEn>=97 && cEn<=122) {
		printf("%c", cEn-32);
	}
	else {
		printf("error");
	}
	return 0;
}