#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	do {
		printf("%d ", num);
		num -= 1;
	} while (num>0);
	return 0;
}