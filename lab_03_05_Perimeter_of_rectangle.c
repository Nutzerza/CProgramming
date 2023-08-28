#include <stdio.h>

int main() {
	double fNum1, fNum2;
	scanf("%lf", &fNum1);
	scanf("%lf", &fNum2);
	printf("Perimeter of rectangle = %.4lf units", (fNum1*2)+(fNum2*2));
	return 0;
}
