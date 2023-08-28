#include <stdio.h>

int main() {
	double matA[3][3], matB[3][3], resultMat[3][3];
	double d1, d2, d3;
	double sum;
	for (int i=0; i<3; i++) {
		scanf("%lf %lf %lf", &d1, &d2, &d3);
		matA[i][0] = d1;
		matA[i][1] = d2;
		matA[i][2] = d3;
	}
	for (int i=0; i<3; i++) {
		scanf("%lf %lf %lf", &d1, &d2, &d3);
		matB[i][0] = d1;
		matB[i][1] = d2;
		matB[i][2] = d3;
	}

	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			for (int k=0; k<3; k++) {
				sum += matA[i][k] * matB[k][j];
			}
			resultMat[i][j] = sum;
			sum = 0;
		}
	}
	
	printf("A x B\n");
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			printf("%.2lf ", resultMat[i][j]);
		}
		printf("\n");
	}
	return 0;
}