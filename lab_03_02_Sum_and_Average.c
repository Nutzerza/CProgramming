#include <stdio.h>

int main() {
	float fNum1, fNum2, fNum3, fNum4;
	scanf("%f", &fNum1);
	scanf("%f", &fNum2);
	scanf("%f", &fNum3);
	scanf("%f", &fNum4);
	printf("Summation is %.2f\n", fNum1+fNum2+fNum3+fNum4);
	printf("Average is %.3f", (fNum1+fNum2+fNum3+fNum4)/4);
	return 0;
}