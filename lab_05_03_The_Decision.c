#include <stdio.h>

int main() {
	int numM, numN;
	scanf("%d %d", &numM, &numN);
	if (numM >= numN) {
		for (int i=numM; i>=numN; i--) {
			printf("%d ", i);
		}
	}
	else {
		for (int i=numM; i<=numN; i++) {
			printf("%d ", i);
		}
	}
	return 0;
}