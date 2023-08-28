#include <stdio.h>

int main() {
	int num=0;
	char check=1;
	char M[] = {2, 20, 8, 10, 4, 6, 16, 18};
	char N[] = {1, 3, 9, 7, 11, 15, 19};
	while (!(num>=1 && num<=20)) {
		scanf("%d", &num);
	}
	for (int i=0; i<8; i++) {
		if (num==M[i]) {
			printf("%d is in M at index [%d]", num, i);
			check = 0;
			break;
		}
		else if (num==N[i]) {
			printf("%d is in N at index [%d]", num, i);
			check = 0;
			break;
		}
	}
	if (check) {
		printf("%d is not in neither M nor N", num);
	}
	return 0;
}