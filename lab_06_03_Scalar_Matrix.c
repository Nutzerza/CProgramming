#include <stdio.h>

int main() {
	double mat[3][3];
	double d1, d2, d3;
	char isScalar=1;
	for (int i=0; i<3; i++) {
		scanf("%lf %lf %lf", &d1, &d2, &d3);
		mat[i][0] = d1;
		mat[i][1] = d2;
		mat[i][2] = d3;
	}
	if (mat[0][0] != mat[1][1] && mat[0][0]!=mat[2][2]) {
		isScalar = 0;
	}
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			if (i!=j && mat[i][j]!=0) {
				isScalar = 0;
			}
		}
	}
	if (isScalar) {
		printf("This is a scalar matrix");
	}
	else {
		printf("This is not a scalar matrix");
	}
	return 0;
}