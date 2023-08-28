#include <stdio.h>
#include <math.h>

int main() {
	float fNum1, fNum2;
	scanf("%f", &fNum1);
	scanf("%f", &fNum2);
	printf("%.2f", sqrt(pow(fNum1, 2) + pow(fNum2, 2)));
	return 0;
}