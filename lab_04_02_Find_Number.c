#include <stdio.h>

int main() {
	double d1, d2, d3;
	scanf("%lf %lf %lf", &d1, &d2, &d3);
	if (d1>=d2 && d1>=d3) {
		if (d2>=d3) {
			printf("%.2lf", d2);
		}
		else {
			printf("%.2lf", d3);
		}
	}
	else if (d2>=d1 && d2>=d3) {
		if (d1>=d3) {
			printf("%.2lf", d1);
		}
		else {
			printf("%.2lf", d3);
		}
	}
	else {
		if (d1>=d2) {
			printf("%.2lf", d1);
		}
		else {
			printf("%.2lf", d2);
		}
	}
	return 0;
}