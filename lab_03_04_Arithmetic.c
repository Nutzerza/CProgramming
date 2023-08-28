#include <stdio.h>

int main() {
	double fNum1, fNum2;
	scanf("%lf,%lf", &fNum1, &fNum2);
	printf("The sum of the given numbers : %lf\n", fNum1+fNum2);
	printf("The difference of the given numbers : %lf\n", fNum1-fNum2);
	printf("The product of the given numbers : %lf\n", fNum1*fNum2);
	printf("The quotient of the given numbers : %lf\n", fNum1/fNum2);
	return 0;
}