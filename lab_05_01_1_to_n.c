#include <stdio.h>

int main() {
	int num, count=1;
	scanf("%d", &num);
	while (count<=num) {
		printf("%d ", count);
		count += 1;
	}
	return 0;
}