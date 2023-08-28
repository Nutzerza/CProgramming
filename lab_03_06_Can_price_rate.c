#include <stdio.h>
#define PI 3.14159265359
int main() {
	float price, cen, height;
	float volume;
	scanf("%f", &price);
	scanf("%f", &cen);
	scanf("%f", &height);
	volume = height*PI*(cen/2)*(cen/2);
	printf("Volume : %.2fml\n", volume);
	printf("Baht/ml : %.4f", price/volume);
	return 0;
}