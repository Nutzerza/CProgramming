#include <stdio.h>

int main() {
	int num, count=0;
	scanf("%d", &num);
	while (num>0) {
		count++;
		printf("%d ", count);
		num--;
	}
	return 0;
}