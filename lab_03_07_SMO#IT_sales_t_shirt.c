#include <stdio.h>

int main() {
	float price, sale, newPrice;
	int amount;
	scanf("%f", &price);
	scanf("%f", &sale);
	scanf("%d", &amount);
	newPrice = price*(1-(sale/100));
	printf("%.2f", amount*newPrice);
	return 0;
}